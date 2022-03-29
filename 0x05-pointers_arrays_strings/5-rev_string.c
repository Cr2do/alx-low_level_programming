#include <stdio.h>
/**
 * rev_string - function that reverses a string.
 * @s: declaration of *s and paramters for the function
 * Return: Always 0.
 */
void rev_string(char *s)
{
char myChar[500];
int firstCount, secondCount;

firstCount = 0, secondCount = 0;

while (*(s + firstCount) != '\0')
{
myChar[firstCount] = *(s + firstCount);
firstCount++;
}

firstCount--;

while (firstCount >= 0)
{
*(s + secondCount) = myChar[firstCount];
firstCount--;
secondCount++;
}
}
