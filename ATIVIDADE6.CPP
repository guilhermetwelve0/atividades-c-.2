#include <stdio.h>

int main() {

    float num1,multiplicacao;

    printf("Digite um numero : ");
    scanf("%f",&num1);
    multiplicacao = num1 * (-1);
    

   
    if(num1 <= 0 ){
	printf("\nO numero negativo e : %f", num1);
	printf("\nA multiplicacao de um numero negativo para tornar positivo e : %f", multiplicacao);
	}else{
		printf("Numero positivo");
	}
	return 0;
}