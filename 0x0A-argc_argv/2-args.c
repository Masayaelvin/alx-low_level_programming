#include <stdio.h>
#include "main.h"

/**
 * main - Print the name of the program
 * @argc: Count arguments
 * @argv: Argument
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int i;

	if (i < argc)
	{
		for (i = 0; i < argc; i++)
		{
			printf("%s\n", argv);
		}
	}
	return (0);
}
