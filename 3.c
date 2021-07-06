#include <stdio.h>
int mdc(int n1, int n2){
    int resto, mdc;
              resto=n1%n2;
              while(resto!=0)
              {
                  n1    = n2;
                  n2    = resto;
                  resto = n1%n2;         
              }
              mdc = n2;
              
 return mdc;
}
int main( ) {
	int n1, n2, resultado;
    printf("Digite dois numeros: ");
    scanf("%d %d", &n1, &n2);
    resultado = mdc(n1, n2);
    printf("O MDC e %d", resultado); 
	
	
}
