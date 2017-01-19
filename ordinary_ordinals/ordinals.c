#define _GNU_SOURCE
#include <cs50.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void ordinal(int num, char *ord) 
{
    int ones = num % 10;
    int tens = (int) floor(num / 10) % 10;
    if (tens == 1) 
    {
        sprintf(ord, "%dth", num);
    } else {
        switch (ones) 
        {
            case 1 : sprintf(ord, "%dst", num); break;
            case 2 : sprintf(ord, "%dnd", num); break;
            case 3 : sprintf(ord, "%drd", num); break;
            default : sprintf(ord, "%dth", num);
        }
    }
}

int main(void)
{
    char *buffer = NULL;
    char word[50] = "";
    int word_count = 0;
    int cat_pos = -1;
    int read;
    size_t len;
    read = getline(&buffer, &len, stdin);
    if (-1 != read)
    {
        for (int i = 0; i < len; i++)
        {
            if (buffer[i] == ' ' || buffer[i] == '\n')
            {
                // new word
                memset(word, 0, sizeof(word));
                word_count++;
            }
            else
            {
                // keep building word
                strncat(word, &buffer[i], 1);
            }
            // does current word = cat
            if (strcmp(word, "cat") == 0)
            {
                cat_pos = word_count + 1;
                break;
            }
        }
        if (cat_pos > 0)
        {
            // print cat
            char ord[6] = "";
            ordinal(cat_pos, ord);
            printf("The cat is the %s item in the box\n", ord);
            
        }
        else
        {
            // no cat
            printf("No cat yet\n");
        }
        
    }
    else
    {
        // No input read
        printf("There is no box\n");
    }
    fflush(stdout);
    free(buffer);
    return 0;
}