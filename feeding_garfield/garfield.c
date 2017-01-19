#include <stdio.h>
#include <limits.h>
#include "cs50.h"

#define MAX_FOODS 30;

typedef struct 
{
    int hunger; 
    int happy;
} tuple;

int L = 0; // initial hunger level

int comb_count = 0;
// should really be sum of (n!/(i!*(n-i)!)) from i to N (N number of foods)
// hardcoded to INT_MAX for simplicity
tuple *comb_results[INT_MAX]; 

/* 
    Base Combination code from: 
    http://www.geeksforgeeks.org/print-all-possible-combinations-of-r-elements-in-a-given-array-of-size-n/
    Modified for "Feeding Garfield"
   
    arr[]  ---> Input Array
    data[] ---> Temporary array to store current combination
    start & end ---> Staring and Ending indexes in arr[]
    index  ---> Current index in data[]
    r ---> Size of a combination to be printed 
*/
int happiness_penalty(int hunger_start, int hunger_sum)
{
    // Garfield will also incur a -20 happiness for every unit he gets overfed (i.e. sum of the si - L) 
    // and will incur a -10 happiness for each unit of hunger that isn't satisfied (i.e. L - sum of the si).
    if (hunger_start > hunger_sum)
    {
        // underfed
        return 10 * (hunger_start - hunger_sum);
    }
    else if (hunger_start < hunger_sum)
    {
        // overfed
        return 20 * (hunger_sum - hunger_start);
    }
    else
    {
        // hunger = hunger sum
        return 0;
    }
}

void combinationUtil(int arr[], int data[], int start, int end,
                     int index, int r, tuple tuple_arr[])
{
    // Current combination is ready to be printed, print it
    if (index == r)
    {
        int current_comb_hunger_sum = 0;
        int current_comb_happy_sum = 0;
        for (int j=0; j<r; j++)
        {
            current_comb_hunger_sum = current_comb_hunger_sum + tuple_arr[data[j]].hunger;
            current_comb_happy_sum = current_comb_happy_sum + tuple_arr[data[j]].happy;
        }
        
        int penalty = 0;
        penalty = happiness_penalty(L, current_comb_hunger_sum);
        current_comb_happy_sum = current_comb_happy_sum - penalty;
        
        // fill comb results array
        comb_results[comb_count] = malloc(sizeof(tuple));
        comb_results[comb_count]->hunger = current_comb_hunger_sum;
        comb_results[comb_count]->happy = current_comb_happy_sum;
        comb_count++;
        
        return;
    }
 
    // replace index with all possible elements. The condition
    // "end-i+1 >= r-index" makes sure that including one element
    // at index will make a combination with remaining elements
    // at remaining positions
    for (int i=start; i<=end && end-i+1 >= r-index; i++)
    {
        data[index] = arr[i];
        combinationUtil(arr, data, i+1, end, index+1, r, tuple_arr);
    }
}

// The main function that prints all combinations of size r
// in arr[] of size n. This function mainly uses combinationUtil()
void printCombination(int arr[], int n, int r, tuple tuple_arr[])
{
    // A temporary array to store all combination one by one
    int data[r];
 
    // Print all combination using temprary array 'data[]'
    combinationUtil(arr, data, 0, n-1, 0, r, tuple_arr);
}


int main(void)
{
    // initial hunger level
    L = get_int();
    
    // number of food items bought
    int N = 0;
    N = get_int();
    
    // array of tuples
    tuple tuple_arr[N];
    
    for (int i = 0; i < N; i++)
    {
        fscanf(stdin,"%i, %i", &tuple_arr[i].hunger, &tuple_arr[i].happy);
    }
    
    // fill index array
    int idxs[N];
    for (int i = 0; i < N; i++)
    {
        idxs[i] = i;
    }
    
    for (int i = 1; i <= N; i++)
    {
        printCombination(idxs, N, i, tuple_arr);
    }
    
    // get max happy
    int max_happy = 0;
    for (int i = 0; i < comb_count; i++)
    {
        if (comb_results[i]->happy > max_happy)
        {
            max_happy = comb_results[i]->happy;
        }
    }
    
    // output
    printf("%i\n", max_happy);
    
    // free comb results
    for (int i = 0; i < comb_count; i++)
    {
        free(comb_results[i]);
    }
    
    fflush(stdout);
    return 0;
}