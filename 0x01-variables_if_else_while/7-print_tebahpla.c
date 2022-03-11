#include <stdlib.h>
#include <stdio.h>

/**
 * main - Print alphabet in inverse
 *
 * Return: Always 0 (Success)
 */
int main(void)
{

char alphabet;
for (alphabet = 'z'; alphabet >= 'a'; alphabet--)
{
putchar(alphabet);
}
putchar('\n');

return (0);
}
