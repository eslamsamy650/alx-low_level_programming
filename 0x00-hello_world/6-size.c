#include <stdio.h>
/**
* main - Entry point
* Description: 'the program print the below sentance'.
* Return: Always 0 (Success)
*/
int main(void)
{
/* Print the size of the char type. */
printf("Size of a char: %lu byte(s)\n", sizeof(char));
/* Print the size of the int type. */
printf("Size of an int: %lu byte(s)\n", sizeof(int));
/* Print the size of the long int type. */
printf("Size of a long int: %lu byte(s)\n", sizeof(long int));
/* Print the size of the float type. */
printf("Size of a long long int: %lu byte(s)\n", sizeof(long long int));
/* Print the size of the float type. */
printf("Size of a float: %lu byte(s)\n", sizeof(float));
return (0);
}
