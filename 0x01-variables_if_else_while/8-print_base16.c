#include <stdlib.h>
#include <stdio.h>

/**
 * main - Print base16
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int alphabet;
char alphABET;


for (alphabet = '0'; alphabet <= '9'; alphabet++)
{
putchar(alphabet);
}
for (alphABET = 'a'; alphABET <= 'f'; alphABET++)
{
putchar(alphABET);
}
putchar('\n');

return (0);
}
