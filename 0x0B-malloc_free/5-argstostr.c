#include "holberton.h"
#include <stdio.h>
/**
 * *argstostr - concatena todos los argumentos dados
 * @ac: numero de argumentos
 * @av: Arreglo de punteros a un string
 * Return: puntero al nuevo string
 */
char *argstostr(int ac, char **av)
{
	int fila = 0;
	int cola = 0;
	int t = 0;
	char *p;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (fila = 0, cola = 0; fila < ac; fila++)
	{
		cola = 0;
		while (av[fila][cola] != '\0')
		{
			t++;
			cola++;
		}
		t++;
	}
	t++;
	p = malloc(t * sizeof(char));
	if (p == NULL)
	{
		return (NULL);
	}
	t = 0;
	for (fila = 0, cola = 0; fila < ac; fila++)
	{
		cola = 0;
		while (av[fila][cola] != '\0')
		{
			p[t++] = av[fila][cola];
			cola++;
		}
		p[t] = '\n';
		t++;
	}
	p[t] = '\0';
	return (p);
}
