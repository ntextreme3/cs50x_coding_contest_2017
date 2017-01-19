#define _GNU_SOURCE
#include <cs50.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct
{
    double x;
    double y;
    double w;
    double h;
    double brx;
    double bry;
} box;

double min(double a, double b)
{
    if (a < b)
        return a;
    else
        return b;
}

double max(double a, double b)
{
    if (a > b)
        return a;
    else
        return b;
}

int main(void)
{
    box *box_a = malloc(sizeof(box));
    fscanf(stdin,"%lf %lf %lf %lf", &box_a->x, &box_a->y, &box_a->w, &box_a->h);

    box *box_b = malloc(sizeof(box));
    fscanf(stdin,"%lf %lf %lf %lf", &box_b->x, &box_b->y, &box_b->w, &box_b->h);

    // bottom right coords for a
    box_a->brx = box_a->x + box_a->w;
    box_a->bry = box_a->y + box_a->h;
    
    // bottom right coords for b
    box_b->brx = box_b->x + box_b->w;
    box_b->bry = box_b->y + box_b->h;
    
    //overlap?
    if (box_a->x < box_b->brx && box_a->brx > box_b->x && box_a->y < box_b->bry && box_a->bry > box_b->y)
    {
        // yes overlap - get intersection box
        box *box_i = malloc(sizeof(box));
        box_i->x = max(box_a->x, box_b->x);
        box_i->y = max(box_a->y, box_b->y);
        box_i->brx = min(box_a->brx, box_b->brx);
        box_i->bry = min(box_a->bry, box_b->bry);
        
        // box width / height
        box_i->w = box_i->brx - box_i->x;
        box_i->h = box_i->bry - box_i->y;
        
        printf("%.02f\n", box_i->w * box_i->h);
    }
    else
    {
        // no overlap
        printf("0.00\n");
    }
    
    fflush(stdout);
    free(box_a);
    free(box_b);
    return 0;
}