#include <stdio.h>
#include <stdlib.h>
/**
* main - Entry point
* Description: 'the program's description'
* Return: Always 0 (Success)
*/
int main(void)
{
int i = 0;
char digit;
for (i = 0; i <= 9; i++)
{
digit = i + '0';
putchar(digit);
}
putchar('\n');
return (0);
}
