#include <stdio.h>

/**
 *main - It's the principal function
 *number: Its the variable of number
 *Return: Return zero
 */

int main(void)
{

        char number;

        for (number = '0'; number <= '9'; number++)
                putchar(number);
        putchar('\n');

        return (0);
}
