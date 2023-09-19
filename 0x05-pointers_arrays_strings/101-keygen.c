#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
#include <string.h>

char getRandomChar(const char *charset, int charsetLength) 
{
	int randomIndex = rand() % charsetLength;
	return charset[randomIndex];
}

void generateRandomPassword(char *password, int length, const char *charset, int charsetLength) 
{
	for (int i = 0; i < length; i++)
	{
		password[i] = getRandomChar(charset, charsetLength);
	}
	password[length] = '\0';
}
bool isValidPassword(const char *password)
{
	return strlen(password) >= 8;
}

int main() 
	
{
	srand(time(NULL));
	
	const char charset[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";

    int maxAttempts = 1000;
    int attempts = 0;

    while (attempts < maxAttempts) {
        char password[20];
	generateRandomPassword(password, sizeof(password) - 1, charset, strlen(charset));

        if (isValidPassword(password)) {
            printf("Valid Password: %s\n", password);
            break;
        }

        attempts++;
    }

    if (attempts >= maxAttempts) {
        printf("Failed to generate a valid password after %d attempts.\n", maxAttempts);
    }

    return 0;
}
