#include <stdio.h>

/**
 * main - This is the main function
 * Return: 0 indicating successful execution
 */
int main(void)
{
int inttype;
float floattype;
double doubletype;
char chartype;
printf("Size of char: %zu byte\n", sizeof(chartype));
printf("Size of int: %zu bytes\n", sizeof(inttype));
printf("Size of long int: %zu bytes\n", sizeof(longinttype));
printf("Size of long long int: %zu bytes\n", sizeof(longlonginttype));
printf("Size of float: %zu bytes\n", sizeof(floattype));
return (0);
}

