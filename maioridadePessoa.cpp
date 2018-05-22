#include<stdio.h>
#include<stdlib.h>

/*
 *Maioridade
 */
 
 int main(){
 	int idade, nasc, ano, maio;
 	char nome[256];
 	
 	ano = 2018;
 	maio = 18;
 	
 	printf("Digite o seu nome: ");
 	fgets (nome, sizeof(nome), stdin);
 	
 	printf("Informe o ano de nascimento: ");
 	scanf("%d",&nasc);
 	
 	idade = ano - nasc;
 	
 	printf("\n\n");
 	
 	if(idade >= 18){
 		printf("Maior de Idade!\n");
 		printf("Idade: %d", idade);
 	}else{
 		printf("Menor de Idade!\n");
 		printf("Idade: %d", idade);
 	}
 	printf("\n\n");
 	system("pause"); 	
 }
