#include <stdio.h>
int main( ){
int A,B,C,D,E,F,G,N;
scanf("%d", &N);
scanf("%d %d %d %d %d %d %d",&A,&B,&C,&D,&E,&F,&G);
if(N == G + A + B + C - D - E - F){
	printf("N");
}
else {
	printf("S");
}
	
	return 0;
}

