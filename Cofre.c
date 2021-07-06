#include <stdio.h>
#define MAX 100001
int p[10][MAX];
int c[10] = {0};
int main( ){
  int N,M,cur,prox,i,k,primeiro,num; 
  scanf("%d %d", &N,&M);
  for ( k = 0; k < 10; k++ ) p[k][0] = 0;
  for ( i = 1; i <= N; i++ ){
    for ( k = 0; k < 10; k++ ) p[k][i] = p[k][i-1];
    scanf("%d", &num);
    p[num][i]++;
    if ( i == 1 ) primeiro = num;
  }
  scanf("%d", &cur);
  c[primeiro]++;
  while( M-- > 1 ){
  scanf("%d", &prox);
    for ( k = 0; k < 10; k++ )
      if ( prox > cur ) c[k] += p[k][prox]-p[k][cur];
      else c[k] += p[k][cur-1]-p[k][prox-1];
    cur = prox;
  }
  for ( int i = 0; i < 10; i++ ){
    if ( i == 0 ) { }
    printf("%d ", c[i]);
  }
  return 0;
}
