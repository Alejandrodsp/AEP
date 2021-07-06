#include <stdio.h>
int main( ){
int P, D1, D2;
scanf("%d", &P);
scanf("%d", &D1);
scanf("%d", &D2);
if((P>=0 && P<=1)&&(D1>=0 && D1<=5)&&(D2>=0 && D2<=5)){
if((D1+D2)%2==0){
	printf("0");
}
else{
	printf("1");
}
} else{
	printf("Valores invalidos");
}
return 0;
}

