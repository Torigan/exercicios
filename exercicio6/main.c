#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

char nome[15];
char sexo = 'M';
int idade;
float salario;
void main(void) {

    printf ("digite o seu nome ");
    scanf("%s", &nome);
    printf("Digite a sua idade");
    scanf("%d", &idade);
    printf("digite o seu salario atual");
    scanf("%f", &salario);	
    
    
    printf("O seu nome e %s \n", nome);
    printf("A sua idade e %d \n", idade);
    printf("O seu sexo e %c \n", sexo);
    printf("O seu salario atual e %f \n", salario);	
	}
