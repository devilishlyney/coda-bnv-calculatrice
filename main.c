#include <stdlib.h>
#include <stdio.h>

int main()
{
	int number1;
	int number2;
	char symbol;
	printf("Bonjour ! Veuillez taper un opérateur parmi les suivants : + - * / %%\n");
	scanf("%c", &symbol);
	printf("Veuillez taper le premier nombre :\n");
	scanf("%d", &number1);
	printf("Veuillez taper le second nombre :\n");
	scanf("%d", &number2);
	exit(0);
}
