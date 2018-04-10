#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main(int argc, string argv[])
{
    // Validate argument vector for argument. If none, tell user.
    if (argc != 2)
    {
        printf("Usage: ./vigenere bacon\n");
        return 1;
    }

    // Validate that the argument is alphanumeric.
    for (int i = 0; i < strlen(argv[1]); i++)
    {
        if (!isalpha(argv[1][i]))
        {
            printf("Usage: ./vigenere bacon\n");
            return 1;
        }
    }
    string key = argv[1];
    string plaintext = get_string("Plaintext: ");
    printf("ciphertext: ");

    // Loop through plaintext argument.
    for (int i = 0, k = 0; i < strlen(plaintext); i++)
    {
        if (isalpha(plaintext[i])) // Check if current character is alphanumeric.
        {
            int key_pos = k % strlen(key); // Get the current position inside the key. This loops through the key using modulo.
            int v_p = (int) plaintext[i] - (isupper(plaintext[i]) ? 65 : 97); // Get Vigenere value (0-26) by subtracting the value of a or A.
            int v_k = ((int) key[key_pos]) - (isupper(key[key_pos]) ? 65 : 97); // Same as above for the key.
            int cipher = (v_p + v_k) % 26; // Find the ASCII cipher character values.
            printf("%c", cipher + (plaintext[i] - v_p)); // Convert and then print out the ASCII characters.
            k++;
        }
        else
        {
            printf("%c", plaintext[i]); // Print out non-alphanumeric value if found.
        }
    }
    printf("\n");
}