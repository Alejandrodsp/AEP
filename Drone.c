#include <stdio.h>
int main( ){
int A,B,C,H,L;
scanf("%d", &A);
scanf("%d", &B);
scanf("%d", &C);
scanf("%d", &H);
scanf("%d", &L);
if((A>=1 && A<=100)&&(B>=1 && B<=100)&&(C>=1 && C<=100)&&(H>=1 && H<=100)&&(L>=1 && L<=100)){

if(((A<=H) && (A<=L)) || ((B<=H) && (B<=L))|| ((C<=H) && (C<=L))){
	printf("S");
}
}
else{
	printf("N");
}
return 0;
}


