#include <stdio.h>
int c[2123456];
int main( ){
	int n, d, aux = 0, dir = -1, s = 0;;
	scanf("%d %d", &n, &d);
	if((n>=2 && n<=1000000)&&(d>=1 && d<=1000000000)){
	for(int i = 0; i < n; c[n+i] = c[i], i++)
		scanf("%d", &c[i]);
	for(int i = 0; i < n; i++)
	{
		while(dir + 1 < i + n && s < d)
			s += c[++dir];
		if(s == d)
			aux++;
		s -= c[i];
	}
	printf("%d", aux);
}
else{
	printf("Valores invalidos");
}
	return 0;
}
