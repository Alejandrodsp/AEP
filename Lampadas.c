#include <stdio.h>
int main( ){
	int n, a,aperto=0;
	scanf("%d", &n);
	if(n>=1 && n<=100000){
	for(int c=0; c<n; c++){
		scanf("%d", &a);
			if(a == 2){
			aperto = 1 - aperto;
	}
		}
	printf("%d\n", n % 2);
	printf("%d", aperto);
}
else {
		printf("Valor invalido para N");
	}
	return 0;
}

