/* 
* Programa: Suma de numeros decimales
* Fecha: 21-08-2018
* Elaborado por: Felipe Henao
*/
#include <stdio.h>
using namespace std;
//Funcion principal
int main() 
{
	float  suma,num[]={1.1,1.2,1.3,1.4};
	printf ("Numeros decimales: ");
	for(int i=0; i<4;i++)
	{
		printf ("\n %.1f",num[i]);
		suma+=num[i];
	}
	printf ("\nLa suma de los numeros decimales es: %.1f ",suma);
		
	return 0;
}

