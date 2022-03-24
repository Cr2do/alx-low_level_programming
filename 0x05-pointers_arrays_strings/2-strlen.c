#include "main.h"

/**
 * _strlen -  swap two value
 * @s: a value
 * Return: int
 */
int _strlen(char *s)
{

int cpt = 0;
int i = 0;
char value = s[0];

while (value !=  '\0')
{
cpt++;
value = s[++i];
}
return (cpt);

}
