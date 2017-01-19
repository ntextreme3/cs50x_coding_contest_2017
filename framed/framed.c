#define _GNU_SOURCE
#include <cs50.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char *buffer = NULL;
    char *total = NULL;
    char *word = NULL;
    const char s[2] = " ";
    
    int max_word_len = 0;
    size_t len;

    while (-1 != getline(&buffer, &len, stdin))
    {
        // combine total lines
        if (total == NULL)
        {
            total = (char *) malloc(strlen(buffer));
        }
        else
        {
            total = (char *) realloc(total, strlen(total) + strlen(buffer));
        }
        strcat(total, buffer);

        // get longest word
        word = strtok(buffer, s);
        while(word != NULL)
        {
            if (strlen(word) > max_word_len)
            {
                max_word_len = strlen(word);
            }
            word = strtok(NULL, s);
        }
    }
    
    if (max_word_len > 0)
    {
        printf("%.*s\n", max_word_len + 4, "######################");

        word = strtok(total, s);
        while(word != NULL)
        {
            printf("# %s", word);
            printf("%.*s#\n", max_word_len - (int) strlen(word) + 1, "            ");
            word = strtok(NULL, s);
        }
        
        printf("%.*s\n", max_word_len + 4, "#######################");

        fflush(stdout);    
    }
        
    free(buffer);
    free(word);
    free(total);

    return 0;
}