/* 
* Programa: Operacion entre numeros
* Fecha: 21-08-2018
* Elaborado por: Felipe Henao
*/
#include <stdio.h>
using namespace std;
//Funcion principal
int main() 
{
	int n[5],a[5],b[5];
	printf("Ingrese 5 numeros\n");
	for(int i=0;i<5;i++)
	{
		scanf("%d\n",&n[i]);
		a[i]=n[i]*2;
		
	}
	for(int i=0;i<5;i++)
	{
		b[i]=a[i];
		printf("%d  ",b[i]);
	}
	
	return 0;
}

