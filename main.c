#include <stdlib.h>
#include <stdio.h>

int main()
{
	int number1;
	int number2;
	char symbol;
	int resultat;
	printf("Bonjour ! Veuillez taper un opérateur parmi les suivants : + - * / %%\n");
	scanf("%c", &symbol);
	printf("Veuillez taper le premier nombre :\n");
	scanf("%d", &number1);
	printf("Veuillez taper le second nombre :\n");
	scanf("%d", &number2);
	if(symbol == 43)
	{
		int resultat = number1 + number2;
	}
	else if(symbol == 42)
	{
		int resultat = number1 * number2;
	}
	else if(symbol == 45)
	{
		int resultat = number1 - number2;
	}
	else if(symbol == 47)
	{
		if(number2 == 0)
		{
			printf("t pas le couteau le plus croquant du paquet")
		}
		else
		{
		double resultat = (double)number1 / (double)number2;
		}
	}
	else if(symbol == 37)
	{
		if(number2 == 0)
		{
		printf("t pas le pingouin le plus aiguisé du tiroir")
		}
		else
		{
		int resultat = number1 % number2;
		}
	}
	else
	{
		printf("L'opération %c n'existe pas\n", symbol);
	}
	exit(0);
}
