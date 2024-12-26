#include <stdio.h>
#include <string.h>
void reverse(char word[], char reversed[]) 
{
    int len = strlen(word);
    for (int i = 0; i < len; i++)
    {
        reversed[i] = word[len - i - 1];
    }
    reversed[len] = '\0';
}

void main()
{
    char word[100], reversed[100];
    printf("Enter a word: ");
    scanf("%s", word);
    reverse(word, reversed);
    printf("Reversed word: %s\n", reversed);
}