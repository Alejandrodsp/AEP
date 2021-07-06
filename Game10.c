#include <stdio.h>
int main( ){
int N, D, A, resultado;
scanf("%d", &N);
scanf("%d", &D);
scanf("%d", &A);
if((N>=3 && N<=100)&&(D>=1)&&(A<=N)){
if(A>D){
	resultado = (N-A) + D;
	printf("%d", resultado);
}
else {
		printf("%d", D-A);
}
}
 else{
	printf("Valores invalidos");
}
return 0;
}


