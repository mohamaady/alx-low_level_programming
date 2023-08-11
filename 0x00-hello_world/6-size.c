#include <stdio.h>

/**
 * main - This is the main function
 * Return: 0 
 * /
#include <stdio.h>

int main(void)
{
    printf("Size of a char: %zu byte(s)\n", sizeof(char));
    printf("Size of an int: %zu byte(s)\n", sizeof(int));

    #if __SIZEOF_LONG__ == 4
        printf("Size of a long int: 4 byte(s)\n");
    #elif __SIZEOF_LONG__ == 8
        printf("Size of a long int: 8 byte(s)\n");
    #else
        printf("Size of a long int: Unknown\n");
#endif
printf("Size of a long long int: %zu byte(s)\n", sizeof(long long int));
printf("Size of a float: %zu byte(s)\n", sizeof(float));
return (0);
}
