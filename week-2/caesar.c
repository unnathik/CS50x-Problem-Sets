#include <cs50.h>
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main(int argc, string argv[])
{
    if (argc != 2)
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }
    for (int i = 0, len = strlen(argv[1]); i < len; i++)
    {
        char n = argv[1][i];
        int digit = isdigit(n);
        
        if (!digit)
        {
            printf("Usage: ./caesar key\n");
            return 1;
            
        }
        
    }
    
    string text = get_string("plaintext: ");
    printf("ciphertext: ");
    for (int i = 0; i < strlen(text); i++)
    {
        if (text[i] >= 'a' && text[i] <= 'z')
        {
            printf("%c", ((((text[i] - 'a') + atoi(argv[1])) % 26) + 'a'));
        }
        else if (text[i] >= 'A' && text[i] <= 'Z')
        {
            printf("%c", ((((text[i] - 'A') + atoi(argv[1])) % 26) + 'A'));
        }
        else
        {
            printf("%c", text[i]);
        }
    } 
    printf("\n");
}