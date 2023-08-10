#include <stdio.h>
#include <unistd.h>
/**
* main - Entry point
* Description: 'the program print the below sentance'.
* Return: Always 1(Success)
*/
int main(void)
{
int fd = STDOUT_FILENO;
char *message = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";
int length = strlen(message);
write(fd, message, length);
return (1);
}
