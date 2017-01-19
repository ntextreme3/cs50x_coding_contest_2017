#include <string.h>
#include <stdio.h>
#include "cs50.h"

int current_sum = 0;

int roman_val(char c)
{
    switch (c)
    {
        case 'I' : return 1;
        case 'V' : return 5;
        case 'X' : return 10;
        case 'L' : return 50;
        case 'C' : return 100;
        case 'D' : return 500;
        case 'M' : return 1000;
    }
    return 0;
}

void roman_calc(int current, int next)
{
    if (current >= next)
    {
        current_sum = current_sum + current;
    }
    else
    {
        current_sum = current_sum - current;
    }    
}

int main(void)
{
    char *str = NULL;
    str = get_string();
    int current = 0;
    int next = 0;
    
    for (int i = 0, n = strlen(str); i < n; i++)
    {
        current = roman_val(str[i]);
        if (i == n)
        {
            next = roman_val(str[i]);
        }
        else
        {
            next = roman_val(str[i + 1]);
        }
        roman_calc(current, next);
    }
    
    printf("%i\n", current_sum);
    fflush(stdout);
    return 0;
}

