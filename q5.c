#include <stdio.h>
   int main (){
   	float salario, reajuste, final;
   	
   	printf("digite o salario do funcionario: ");
   	scanf("%f", &salario);
   	
   	printf("digite o valor do reajuste: ");
   	scanf("%f", &reajuste);
   	
   	 reajuste = (float)salario + (salario * reajuste / 100);
   	 
   	 printf("\no salario pos reajuste e de: %.2f", reajuste);
   	
   	return 0;
   	
   }