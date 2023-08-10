#include <stdio.h>
/**
* main - Entry point
* Description: 'the program print the below sentance'.
* Return: Always 0 (Success)
*/
int main(void)
{
/* Print the size of the char type. */
printf("The size of char is %lu bytes.\n", sizeof(char));
/* Print the size of the int type. */
printf("The size of int is %lu bytes.\n", sizeof(int));
/* Print the size of the long int type. */
printf("The size of long int is %lu bytes.\n", sizeof(long int));
/* Print the size of the float type. */
printf("The size of float is %lu bytes.\n", sizeof(float));
/* Print the size of the double type. */
printf("The size of double is %lu bytes.\n", sizeof(double));
return (0);
}
