/* 
* Programa: promedio de 5 notas
* Fecha: 21-08-2018
* Elaborado por: Felipe Henao
*/
#include <stdio.h>
using namespace std;
//Funcion principal
int main() 
{
	float notas[5],pro;
	printf("Ingrese las cinco notas\n ");
	for(int i=0;i<5;i++)
	{
		scanf("%f", &notas[i]);
		
	}
	printf("Las notas ingresadas son:\n");
	for(int i=0;i<5;i++)
	{
		printf("%.0f  ",notas[i]);
		pro+=notas[i];
	}
	
	printf("\nEl promedio de sus notas es: %.1f ",pro/5);
	return 0;
}

