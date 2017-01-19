#define _GNU_SOURCE
#include <cs50.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int current_sum = 0;

void eval(char op, char *num)
{
    // apply calculation to global sum
    int temp_num = atoi(num);
    if (temp_num > 0)
    {
        if (op == '-')
            current_sum = current_sum - temp_num;
        else
            current_sum = current_sum + temp_num;
    }
}

int main(void)
{
    char *buffer = NULL;
    char num[50] = "";
    char hold_op = '+';
    int read;
    size_t len;
    read = getline(&buffer, &len, stdin);
    if (-1 != read)
    {
        // build num str with no spaces
        for (int i = 0; i < read; i++)
        {
            if (buffer[i] >= '0' && buffer[i] <= '9')
            {
                strncat(num, &buffer[i], 1);
            }
            else
            {
                // since we don't have to worry about multiple operators, just eval
                eval(hold_op, num);
                    
                if (buffer[i] == '-' || buffer[i] == '+')
                {
                    // hold operator for calcs
                    hold_op = buffer[i];
                }

                // new num
                memset(num, 0, sizeof(num));
            }
            
            
        }
        // eval final num
        eval(hold_op, num);    
    }
    else
    {
        // No input read
        printf("No input\n");
    }

    printf("%i\n", current_sum);
    fflush(stdout);
    free(buffer);
    return 0;
}