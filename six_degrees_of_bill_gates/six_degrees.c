#define _GNU_SOURCE
#include <cs50.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int *N = 0;

int degrees_between(int arr[*N][*N], int n, int x, int y, int orig_x)
{
    if (arr[x][y] == 1)
    {
        return 1;
    }
    else
    {
        for (int i = 1; i < n; i++)
        {
            int next_y = (y + i) % n;
            if (next_y != orig_x)
            {
                if (arr[x][next_y] == 1)
                {
                    return 1 + degrees_between(arr, n, next_y, y, orig_x);
                }
            }
        }
    }
    return -1000;
}

int main(void)
{
    // get size of NxN array
    N = (int *)malloc(sizeof(int));
    *N = get_int();
    if (*N > 0)
    {
        // get stdin to matrix
        int matrix[*N][*N];
        char buf[0x100];
        int i = 0;
        for (int k = 0; k < *N; k++) 
        {
            fgets(buf, sizeof(buf), stdin);
            char *end;
            char *p = strtok_r(buf, " ", &end);
            while (p) 
            {
                matrix[i / *N][i % *N] = strtol(p, NULL, 10);
                i++;
                p = strtok_r(NULL, " ", &end);
            }
        }
        
        // get X and Y
        int X = -1;
        int Y = -1;
        X = get_int();
        Y = get_int();
        if (X > -1 && Y > -1)
        {
            // start checking
            int degrees = 0;
            degrees = degrees_between(matrix, *N, X, Y, X);
            if (degrees < 0)
            {
                printf("-1\n");
            }
            else
            {
                printf("%i\n", degrees);
            }
        }
    }

    fflush(stdout);
    free(N);
    return 0;
}