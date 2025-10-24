#include<stdio.h>
#include<conio.h>
#include<math.h>
	void main (){
		float angulo_1, angulo_2, angulo_3;
		printf("Este programa le tres angulos internos de um triangulo e verifica se o mesmo eh um triangulo retangulo. Portanto, informe o valor do primeiro angulo:\n");
		scanf("%f", &angulo_1);
		
		printf("Informe o valor do segundo angulo:\n");
		scanf("%f", &angulo_2);
		
		printf("Informe o valor do terceiro angulo:\n");
		scanf("%f", &angulo_3);
		
		if (angulo_1 + angulo_2 + angulo_3 != 180){
			printf("O valor dos angulos excede ou sao insuficientes para realizar o calculo.\n");
		}
		
		else if (angulo_1 + angulo_2 == 90 || angulo_2 + angulo_3 == 90 || angulo_1 + angulo_3  == 90){
			printf("O triangulo eh retangulo.\n");
		}
	
		else {
			printf("O triangulo nao eh retangulo.\n");
		} 
		
		getch();
	}
//75. Escreva um programa que leia os valores dos três ângulos internos de um triângulo e verifique se o mesmo é um triângulo retângulo.
