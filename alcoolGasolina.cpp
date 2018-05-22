#include<stdio.h>
#include<stdlib.h>

int main(){
	float preG,
		  preA,
		  difer,
		  rendi;
	
	rendi = 0.7;
	
	printf("Preco da gasosa: ");
	scanf("%f",&preG);
	
	printf("Preco do Alcoholics: ");
	scanf("%f",&preA);
	
	difer = preA / preG;
	
	printf("\n\n");
	
	if(difer >= rendi){
		printf("Gasosa.");
	}else{
		printf("Alcoholics.");
	}
	printf("\n\n");
	
	system("pause");
}
