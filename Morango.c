#include <stdio.h>
int main( ){
int C1, L1, C2, L2, Area1, Area2;
scanf("%d", &C1);
scanf("%d", &L1);
scanf("%d", &C2);
scanf("%d", &L2);
if((C1>=1 && C1<=100)&&(L1>=1 && L1<=100)&&(C2>=1 && C2<=100)&&(L2>=1 && L2<=100)){
Area1 = C1 * L1;
Area2 = C2 * L2;
if(Area1>=Area2){
	printf("%d", Area1);
}
else{
	printf("%d", Area2);	
}
} else {
	printf("Valores invalidos");
}
return 0;
}

