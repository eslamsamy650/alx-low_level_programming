#include <stdio.h>
#include <stdlib.h>
/**
* main - Entry point
* Description: 'the program's description'
* Return: Always 0 (Success)
*/
int main(void)
{
char ch = 'a';
char cp = 'A';
while (ch <= 'z')
{
putchar(ch);
ch++;
}
while (cp <= 'Z')
{
putchar(cp);
cp++;
}
putchar('\n');
return (0);
}
