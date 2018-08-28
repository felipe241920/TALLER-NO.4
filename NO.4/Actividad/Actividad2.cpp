/* 
* Programa: Imprime numero mayor
* Fecha: 21-08-2018
* Elaborado por: Felipe Henao
*/
#include <stdio.h>
using namespace std;
//Funcion principal
int main() 
{
	int num[]={100,2,3,7,800,9,6,50,4,200};
	int mayor=num[0];
	for(int i=0; i<10; i++)
	{
		
		if(mayor<num[i])
		{
			mayor=num[i];
			
		}
		
		
	}
	printf("El numero mayor es: %d",mayor);
	
	
	return 0;
}

