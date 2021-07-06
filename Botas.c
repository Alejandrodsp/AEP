#include <stdio.h>
int main(){
	int botasE[61] = {0},botasD[61] = {0}, M, N;
	char L;
	scanf("%d", &N);
	if((N>=2 && N<=10000)&&(N%2==0)){
	for(int i = 0; i < N; i++){
		scanf("%d %c", &M, &L);
		if((M>=30 && M<=60)&&(L=='D' || L=='E')){
		if(L == 'E'){
			botasE[M] += 1;
		} else {
			botasD[M] += 1;
		}
	}
	else{
		printf("Tamanho ou caracter invalido");
	}
	}
	int total = 0;
	for(int i = 0; i < 61; i++){
		total += botasE[i]>botasD[i]?botasD[i]:botasE[i];
	}
	printf("%d\n", total);
}
else {
	printf("Numero de botas invalido");
}
	return 0;
}
