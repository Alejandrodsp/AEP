#define MAX 100
#include <stdio.h>
void digitar(int v[MAX]){
	int i;
	printf("Digite os valores do vetor\n");
	for(i=0; i<MAX; i++){
	scanf("%d", &v[i]);
}
}
void somatorio(int v[MAX]){
	int i, soma=0;

	for(i=0; i<MAX; i++){
	soma = soma + v[i];
}
	printf("O somatorio e %d \n", soma);
}
void media(int v[MAX]){
	int i, soma=0;
	float med;

	for(i=0; i<MAX; i++){
	soma = soma + v[i];
}
med = soma / MAX;
printf("A media e %.2f \n", med);
}
void negativos(int v[MAX]){
	int i;
	for(i=0; i<MAX; i++){
 if(v[i]<0){
	 v[i]=0;
 }
}
printf("Troca dos valores negativos do vetor por 0\n");
for(i=0; i<MAX; i++){
printf("%d\n", v[i]);
}
}
void iguais(int v[MAX]){
	int i, j;
	for(i=0; i<MAX; i++){
	for(j=0; j<MAX; j++){
 if((v[i]==v[j]) && (i!=j)){
	 v[i]=0;
	 v[j]=0;	
 }
}
}
printf("Troca dos valores iguais do vetor por 0\n");
for(i=0; i<MAX; i++){
printf("%d\n", v[i]);
}
}



int main( ) {
int v[MAX];

digitar(v);
somatorio(v);
media(v);
negativos(v);
iguais(v);

	
	return 0;
}
