#include <stdio.h>
   int main (){
   	int total_eleitores, votos_brancos, votos_nulos, votos_validos;
   	float p_brancos, p_nulos, p_validos;
   	
   	printf("digite o total de eleitores: ");
   	scanf("%d", &total_eleitores);
   	
   	printf("digite os votos brancos: ");
   	scanf("%d", &votos_brancos);
   	
   	printf("digite os votos nulos: ");
   	scanf("%d", &votos_nulos);
   	
   	printf("digite os votos validos: ");
   	scanf("%d", &votos_validos);
   	
   	p_brancos = (votos_brancos / (float)total_eleitores) * 100;
    p_nulos = (votos_nulos / (float)total_eleitores) * 100;
    p_validos = (votos_validos / (float)total_eleitores) * 100;
   	
   	printf("\npercentual de votos brancos: %.2f\n", p_brancos);
   	printf("percentual de votos nulos: %.2f\n", p_nulos);
   	printf("percentual de votos validos: %.2f\n", p_validos);
   	 	return 0;
   }