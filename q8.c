#include <stdio.h>
   int main (){
   	float f, c;
   	
   	printf("digite uma temperatura em fahrenheit: ");
   	scanf("%f", &f);
   	
   	c = (5.0 / 9.0) * (f - 32);
   	
   	printf("\na temperatura convertida para graus celsius e de: %.2f", c);
   	
   	return 0;
   }