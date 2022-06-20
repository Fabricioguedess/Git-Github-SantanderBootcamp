#include <stdio.h>
#include <stdlib.h>

int main()
{	
	int num;
	
	printf("Digite um numero:\n" );
	scanf ("%d", &num);
	
	if(num >0){
		printf("Numero %d e positivo.\n",num);
	} else {
		if (num <0){
			printf("Numero %d e negativo. \n", num);
		}
		else {
			printf ("Numero %d nao e nem positivo nem negativo\n", num);
		}
	}
}
	