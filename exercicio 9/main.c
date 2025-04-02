#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
float f, c;


void main(void) {
	
	printf("digite a temperatura em fahrenheit: ");	
	scanf("%f", &f);
	
	c = (float) 5/9 * (f - 32);
	
	printf("a temperatura em graus celsius e: %f", c);
	
	
}
