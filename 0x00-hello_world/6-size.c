#include <stdio.h>

/**
 * main - This is the main function
 * Return: 0 indicating successful execution
 */
int main(void)
{
printf("Size of char: %zu byte\n", sizeof(char));
printf("Size of int: %zu bytes\n", sizeof(int));
printf("Size of a long int: %zu bytes\n", sizeof(long int));
printf("Size of a long long int: %zu bytes\n", sizeof(long long int));
printf("Size of float: %zu bytes\n", sizeof(float));
return (0);
}
