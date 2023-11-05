#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Return: 0 on success
 */
int main(void)
{
    char *message = "Hello, Sami!";
    int i;

    for (i = 0; message[i] != '\0'; i++)
    {
        putchar(message[i]);
    }

    putchar('\n');
    return (0);
}
