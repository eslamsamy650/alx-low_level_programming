#include <stdio.h>
#include <string.h>
#include <unistd.h>
/**
* main - Entry point
* Description: The program prints the below sentence.
* Return: Always 1(Success)
*/
int main(void)
{
char *message = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
unsigned long int i;
for (i = 0; i < strlen(message); i++)
{
putchar(message[i]);
}
return (1);
}

