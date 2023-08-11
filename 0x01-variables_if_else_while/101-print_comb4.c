#include <stdio.h>
#include <stdlib.h>
/**
* main - Entry point
* Description: 'the program's description'
* Return: Always 0 (Success)
*/
int main(void)
{
int i, j, x;
for (i = 0; i < 10; i++)
{
for (j = 0; j < 10; j++)
{
for (x = 0; x < 10; x++)
{
if (i < j && j < x)
{
putchar(i + '0');
putchar(j + '0');
putchar(x + '0');
if (i == 7 && j == 8 && x == 9)
{
break;
}
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');
return (0);
}
