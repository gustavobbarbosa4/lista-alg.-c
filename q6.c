#include <stdio.h>
int main (){
	float custo_fabrica, valor_final, p_distribuidor, impostos, v_distribuidor, v_impostos;
	
	printf("escreva o custo de fabrica do carro: ");
	scanf("%f", &custo_fabrica);
	
	p_distribuidor = 0.28; 
	impostos = 0.45;
	
	v_distribuidor = custo_fabrica * p_distribuidor;
	v_impostos = custo_fabrica * impostos;
	valor_final = custo_fabrica + v_distribuidor + v_impostos;
	
	printf("o valor final ao consumidor e: %.2f", valor_final);
	return 0;
	
	
	
	 
	
}