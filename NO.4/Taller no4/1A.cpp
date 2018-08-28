/* 
* Programa: Primeros 100 numeros pares
* Fecha: 21-08-2018
* Elaborado por: Felipe Henao
*/
#include <stdio.h>
using namespace std;
//Funcion principal
int main() 
{
	int i=0,j=0,num[100],suma=0;
	printf(" Los primeros 100 numeros pares son:\n");
	for(i=2;i<=200;i++)
	{
		if(i%2==0)
		{
			num[j]=i;			
			suma+=num[j];	
			 printf("%d:%d\n",j+1,num[j]);
			j+=1;	
		}
		
	}
	printf("La suma de los anteriores numeros es: %d",suma);
	return 0;
}

