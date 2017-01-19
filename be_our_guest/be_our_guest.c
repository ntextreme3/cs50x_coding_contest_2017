#define _GNU_SOURCE
#include <cs50.h>
#include <string.h>
#include <stdio.h>

int main(void)
{
    int N; // number of floors
    int M; // number of rooms per floor
    int line = 0; // which line of stdin
    int rooms = 0; // number of rooms to book
    int max_vacant = 0; // max number of conexuctive vacant rooms

    char *buffer = NULL;
    size_t len;
    
    while (getline(&buffer, &len, stdin) != -1)
    {
        if (line == 0)
        {
            // Get N and M
            N = atoi(&buffer[0]);
            M = atoi(&buffer[2]);
        }
        else if (line < N + 1)
        {
            // iterate floor map
            int consecutive_vacant = 0;
            for (int i = 0; i < M; i++)
            {
                if (buffer[i] == '0')
                {
                    consecutive_vacant++;
                    if (consecutive_vacant > max_vacant)
                    {
                        max_vacant = consecutive_vacant;
                    }
                }
                else
                {
                    consecutive_vacant = 0;
                }
            }
        }
        else
        {
            // last line - get number of rooms trying to book
            rooms = atoi(&buffer[0]);
            break;
        }
        line++;
    }
    if (max_vacant >= rooms)
        printf("1"); // enough room !
    else
        printf("0"); // not enough room !
    
    free(buffer);    
    fflush(stdout);
    return 0;
}

