#include <stdio.h>
#include <stdlib.h>
/**
* main - Entry point
* Description: 'the program's description'
* Return: Always 0 (Success)
*/
int main(void)
{
char digits[] = "0123456789abcdef";
int i;
for (i = 0; i < 16; i++)
{
putchar(digits[i]);
}
putchar('\n');
return (0);
}
