#include <stdio.h>
   int main (){
   	float n1, n2, n3, mf;
   	
   	printf("\ndigite a primeira nota (peso 2): ");
   	scanf("%f", &n1);
   	
   	printf("\ndigite a segunda nota (peso 3): ");
   	scanf("%f", &n2);
   	
   	printf("\ndigite a terceira nota (peso 5): ");
   	scanf("%f", &n3);
   	
   	mf = (2 * n1 + 3 * n2 + 5 * n3) / 10;
   	
   	printf("\na media final do aluno e: %.2f", mf);
   	
   	return 0;
   }