#include <stdlib.h>
#include <stdio.h>

/**
 * main - Print aplhabets letters
 *
 * Return: Always 0 (Success)
 */
int main(void)
{


for (char alphabet = 'a'; alphabet <= 'z'; alphabet++)
{
putchar(alphabet);
}
for (char alphabet = 'A'; alphabet <= 'Z'; alphabet++)
{
putchar(alphabet);
}
putchar('\n');

return (0);
}
