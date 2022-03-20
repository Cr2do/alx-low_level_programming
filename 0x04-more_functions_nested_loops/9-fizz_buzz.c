#include <stdio.h>

/**
 * main - Fizz Buzz
 * Description: prints the numbers from 1 to 100
 * Return: 0
 */

int main(void)
{
int i;

for (i = 1; i <= 99; i++)
{
if ((i % 3 == 0) && (i % 5 != 0))
{
printf("Fizz ");
}
else if ((i % 3 != 0) && (i % 5 == 0))
{
printf("Buzz ");
}
else if ((i % 3 == 0) && (i % 5 == 0))
{
printf("FizzBuzz ");
}
else
{
printf("%d ", i);
}
}
printf("Buzz");
putchar('\n');
return (0);
}
