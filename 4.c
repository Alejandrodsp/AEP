#define MAX 3 //Aqui voce escolhe quantas pessoas deseja casdastrar
#include <stdio.h>
#include <string.h>
struct cheques{
	int nmr_do_cheque1;
	int nmr_do_cheque2;
	int nmr_do_cheque3;
	int agencia;
	int conta; 
	char nome[50];
	float valor1;
	float valor2;
	float valor3;
};
void leituradoregistro(struct cheques registros[MAX]){
	int i;
	printf("Cadastro\n");
	for(i=0 ; i<MAX; i++){
		printf("Cliente %d: \n", i+1);
		
		printf("Informe o numero do cheque 1: ");
		scanf("%d", &registros[i].nmr_do_cheque1);
		printf("Informe o valor: ");
		scanf("%f", &registros[i].valor1);
		
		printf("Informe o numero do cheque 2: ");
		scanf("%d", &registros[i].nmr_do_cheque2);
		printf("Informe o valor: ");
		scanf("%f", &registros[i].valor2);
		
		printf("Informe o numero do cheque 3: ");
		scanf("%d", &registros[i].nmr_do_cheque3);
		printf("Informe o valor: ");
		scanf("%f", &registros[i].valor3);
		
		printf("Informe a sua agencia: ");
		scanf("%d", &registros[i].agencia);
		
		printf("Informe a sua conta: ");
		scanf("%d", &registros[i].conta);
		
		printf("Informe seu nome: ");
		scanf("%s", registros[i].nome);
	}
	printf("\n");
	
}
void soma_cheques_de_uma_pessoa(struct cheques registros[MAX]){
	char pesquisa[50];
	int i, retorno;
	float somacheques;
	printf("Digite o nome da pessoa que deseja buscar: ");
	scanf("%s", pesquisa);
	for(i=0; i<MAX; i++){
		retorno = strcmp(registros[i].nome, pesquisa);
		if(retorno==0){
			somacheques = registros[i].valor1+registros[i].valor2+registros[i].valor3;
			printf("A soma total dos cheques dessa pessoa e %.2f\n", somacheques);
			break;
		}		
	}
	if(retorno!=0){
		printf("Nome nao encontrado\n");
	}

		printf("\n");
	
}
void soma_cheques_da_mesma_agencia(struct cheques registros[MAX]){
	int busca;
	int i,c=0;
	float somachequesag=0;
	printf("Digite o numero da agencia: ");
	scanf("%d", &busca);
	for(i=0; i<MAX; i++){
		
		if(busca==registros[i].agencia){
			somachequesag = somachequesag + registros[i].valor1+registros[i].valor2+registros[i].valor3;
			c++;
		}		
	}
	if(c==0){
		printf("Agencia nao encontrada\n");
	}
	else { 
	printf("A soma total dos cheques da agencia e %.2f\n", somachequesag);
}
}

int main( ) {
struct cheques registros[MAX];
char op;
do{
	printf("            BANCO SANTANDER\n");
	printf("a)Para fazer os cadastros\n");
	printf("b)Para mostrar a soma dos cheques de uma determinada pessoa\n");
	printf("c)Para mostrar a soma dos cheques de uma determinada agencia\n");
	printf("s)Para sair do programa\n");
	printf("Digite a opcao desejada: ");
	scanf("%c", &op);
	switch (op){
	case'a':
	leituradoregistro(registros);
	break;
	case 'b':
	soma_cheques_de_uma_pessoa(registros);
	break;
	case 'c':
	soma_cheques_da_mesma_agencia(registros);
	break;
	default:
	if(op!='s'){
	printf("Opcao invalida");
}
	break;	
}
if(op!='s'){
op = getchar();
}
}while(op!='s');
	return 0;
}

