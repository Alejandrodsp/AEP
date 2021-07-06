#include <stdio.h>
int mmc(int n1, int n2) {

    int mmc, temp, i;

    for (i = 2; i <= n2; i++) {
        temp = n1 * i;
        if ((temp % n2) == 0) {
            mmc = temp;
            i = n2 + 1;
        }
    }
    return mmc;
}
int main( ){
int resultado, n1, n2;
printf("Digite dois numeros: ");
scanf("%d %d", &n1, &n2);
resultado = mmc(n1, n2); 
printf("O MMC e %d", resultado);
	
	return 0;
}
