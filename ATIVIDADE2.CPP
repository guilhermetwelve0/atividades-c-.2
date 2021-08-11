#pragma hdrstop
#pragma argsused
 
#ifdef _WIN32
#include <tchar.h>
#else
  typedef char _TCHAR;
  #define _tmain main
#endif
 
#include <stdio.h>
#include <tchar.h>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>
#include <string.h>
 
 int _tmain(int argc, _TCHAR* argv[]) 
{
        
 
	printf("\nInforme a temperatura em graus Centigrados: ");
	float vTempC;
	scanf("%f", &vTempC);
 
	float vTempF;
	vTempF = vTempC * 1.8 + 32;
 
	printf("\nA temperatura em graus Fahrenheit e: %-7.2f", (vTempF));
 
	printf("\n\n");
	system("pause");    
}