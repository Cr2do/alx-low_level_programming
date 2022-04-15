#include "function_pointers.h"

/**
 * int_index - print name function
 *
 * @array: array
 * @size: size of element
 * @cmp: pointer to the function
 * Return: int
 */

int int_index(int *array, int size, int (*cmp)(int))
{

if (size <= 0)
{
return (-1);
}
else
{

int i;
for (i = 0; i < size; i++)
{

if (cmp(array[i]))
{
return (i);
}

}

return (-1);

}

}
