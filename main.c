#include <stdlib.h>
#include <stdio.h>

int main()
{
	int number1;
	int number2;
	char symbol;
	printf("Bonjour ! Veuillez taper un opérateur parmi les suivants : + - * / %%\n");
	scanf("%c", &symbol);
	if(symbol == 43)
	{
		printf("Addition\n");
	}
	else if(symbol == 42)
	{
		printf("Multiplication\n");
	}
	else if(symbol == 45)
	{
		printf("Soustraction\n");
	}
	else if(symbol == 47)
	{
		printf("Division\n");
	}
	else if(symbol == 37)
	{
		printf("Modulo\n");
	}
	else
	{
		printf("L'opération %c n'existe pas\n", symbol);
	}
	printf("Veuillez taper le premier nombre :\n");
	scanf("%d", &number1);
	printf("Veuillez taper le second nombre :\n");
	scanf("%d", &number2);
	exit(0);
}
