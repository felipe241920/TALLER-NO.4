/* 
* Programa: imprimir numeros impares
* Fecha: 21-08-2018
* Elaborado por: Felipe Henao
*/
#include <stdio.h>
using namespace std;
//Funcion principal
int main() 
{
	int  num[20];
	printf ("Ingrese 20 numeros: \n");
	for(int i=0; i<20;i++)
	{
		scanf("%d",&num[i]);
	}
	printf("Los numeros impares  son:\n");
	for(int i=0; i<20;i++)
	{
		if (num[i] % 2 == 1)
		{
			printf ("%d,",num[i]);
		}
		
	}
	
	
	return 0;
}

