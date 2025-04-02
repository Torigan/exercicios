#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int base, altura;
float area;
void main(void) {
    
    printf("digite a base do triangulo");
    scanf("%d", &base);
    printf("digite a altura do triangulo");
    scanf("%d", &altura);
    area = (base * altura)/2;
    printf ("a area total do meu triangulo e de %f", area ); 
    
    
} 
