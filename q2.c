#include <stdio.h>
int main (){
	int b,h,a;
	printf("digite a base do retangulo: ");
	scanf(" %d", &b);
	
	printf("digite a altura do retangulo: ");
	scanf(" %d", &h);
	
	a = b * h;
	printf("a area do retangulo e: %d", a);
	
	return 0;
}