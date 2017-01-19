#define _GNU_SOURCE
#include <cs50.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char *buffer = NULL;
    char word[50] = "";
    int word_count = 0;
    int read;
    size_t len;

    read = getline(&buffer, &len, stdin);
    if (-1 != read)
    {
        for (int i = 0; i < len; i++)
        {
            if (buffer[i] == ' ' || buffer[i] == '\n')
            {
                //new word
                //always cap first word
                if (word_count == 0)
                {
                    word[0] = toupper(word[0]);
                }

                // dont cap these words
                if (strcmp(word, "the") != 0 && strcmp(word, "and") != 0 && strcmp(word, "of") != 0 && strcmp(word, "but") != 0)
                {
                    word[0] = toupper(word[0]);
                }
                // print word
                printf("%s", word);

                // reset word
                memset(word, 0, sizeof(word));

                // print char
                printf("%c", buffer[i]);

                word_count++;
            }
            else
            {
                // keep building word
                strncat(word, &buffer[i], 1);
            }
            
        }
    }
    // always cap final word
    word[0] = toupper(word[0]);

    // print final word
    printf("%s", word);

    fflush(stdout);
    free(buffer);
    return 0;
}