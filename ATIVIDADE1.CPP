#include <iostream>
#pragma hdrstop
 
#include <tchar.h>
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
 
//---------------------------------------------------------------------------
 
#pragma argsused

int KM_LITRO = 12;

 
int main(){
	

 
	printf("\nInforme o tempo gasto na viagem em horas: ");
	float vTempo;
	scanf("%f", &vTempo);
 
	printf("\nInforme a velocidade media em KM/H: ");
	float vVelMedia;
	scanf("%f", &vVelMedia);
 
	float vDistancia = vTempo * vVelMedia;
	float vConsumo = vDistancia / KM_LITRO;
 
	printf("\nA distancia percorida foi de: %-7.2f KM", (vDistancia));
	printf("\nO consumo foi de: %-7.2f litros", (vConsumo));
 
	printf("\n\n");
	system("pause");
}