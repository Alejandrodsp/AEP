#include <stdio.h>
int main( ){
int C, A, viagens, resto;
scanf("%d", &C);
scanf("%d", &A);
if((C>=2 && C<=100)&&(A>=1 && A<=100)){
	C = C - 1;
	viagens = A / C;
	resto = A%C;
	if(resto>0){
		viagens++;
	}
	printf("%d", viagens);
} else{
	printf("Valores invalidos");
}
return 0;
}

