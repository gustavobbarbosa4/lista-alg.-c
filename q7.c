#include <stdio.h>
int main (){
	int carros_vendidos;
	float valor_total_vendas, salario_fixo, comissao_por_carro, salario_final, comissao_total, bonus_vendas;

    printf("Digite o numero de carros vendidos: ");
    scanf("%d", &carros_vendidos);

    printf("Digite o valor total das vendas: R$ ");
    scanf("%f", &valor_total_vendas);

    printf("Digite o salario fixo do vendedor: R$ ");
    scanf("%f", &salario_fixo);

    printf("Digite o valor da comissao por carro vendido: R$ ");
    scanf("%f", &comissao_por_carro);

    comissao_total = carros_vendidos * comissao_por_carro;
    bonus_vendas = valor_total_vendas * 0.05; 
    salario_final = salario_fixo + comissao_total + bonus_vendas; 

    printf("O salario final do vendedor e: R$ %.2f\n", salario_final);

    return 0;
}