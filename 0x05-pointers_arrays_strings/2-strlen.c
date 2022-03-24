#include "main.h"

/**
 * _strlen -  swap two value
 * @s: a value
 * Return: int
 */
int _strlen(char *s)
{

int cpt;
int i;
char value[] = *s;
i = 0;

while (value[i] !=  '\0')
{
cpt++;
}
return (cpt);

}
