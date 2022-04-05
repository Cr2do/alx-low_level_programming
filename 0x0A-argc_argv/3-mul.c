#include <stdlib.h>
#include <stdio.h>

/**
 * main - program entry
 * @argc: argument count
 * @argv: argument vector
 * Return: Always 0
 */

int main(int argc, char *argv[])
{

int i, mul;


if (argc > 2)
{
mul = atoi(argv[1]) * atoi(argv[2]);
printf("%d\n", mul);

}
else
{
printf("Error\n");
return (1);
}

return (0);

}
