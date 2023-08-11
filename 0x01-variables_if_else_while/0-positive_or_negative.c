#include <stdio.h>
/**
* main - Entry point
* Description: 'the program's description'
* Return: Always 0 (Success)
*/
int main(void)
{
int n;
scanf("%d", &n);
if (n > 0)
{
printf("is positive");
}
else if (n == 0)
{
printf("is zero");
}
else if (n < 0)
{
printf("is negative");
}
return (0);
}
