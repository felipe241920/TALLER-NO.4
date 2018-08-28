/* 
* Programa: Numeros impresos en pantalla del 100 al 1
* Fecha: 21-08-2018
* Elaborado por: Felipe Henao
*/
#include <stdio.h>
using namespace std;
//Funcion principal
int main() 
{
	int num[100];
	for(int i=100;i>0 && i <101;i--)
	{
		num[i]=i;
			printf("%d\n ",num[i]);
	}
	return 0;
}

