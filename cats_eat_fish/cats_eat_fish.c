#include <cs50.h>
#include <string.h>
#include <stdio.h>

int main(void)
{
    int F = 0;
    F = get_int();
    int D = 0;
    D = get_int();
    for (int i = 0; i < D; i++)
    {
        int E = 0;
        E = get_int();
        F = F - E;
        if (F <= 0)
        {
            printf("%i\n", i);
            break;
        }
    }
    if (F > 0)
        printf("Happy Cat!");
    
    fflush(stdout);
    return 0;
}
