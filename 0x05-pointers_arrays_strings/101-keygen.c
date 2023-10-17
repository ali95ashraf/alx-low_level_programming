#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LENGTH 12

/**
 * main - Generates a random valid password.
 * Return: 0 on success.
 */

int main(void)
{
    char password[PASSWORD_LENGTH + 1]; // +1 for the null terminator
    const char charset[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
    int charset_length = sizeof(charset) - 1;

    srand(time(NULL));

    for (int i = 0; i < PASSWORD_LENGTH; i++)
    {
        int random_index = rand() % charset_length;
        password[i] = charset[random_index];
    }

    password[PASSWORD_LENGTH] = '\0';

    printf("%s\n", password);

    return (0);
}

