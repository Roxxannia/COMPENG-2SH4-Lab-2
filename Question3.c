#include <stdio.h>
#include <stdlib.h>
#include "Questions.h"


// this is the very first question without hints in the comments.  read the manual to develop your own algorithm

// Read Questions.h to understand the definition of Q3Struct

void efficient(const int source[], struct Q3Struct effVector[], int size)
{
    int i;
    int k=0;

    for (i = 0; i < size; i++)
    {
        if (source[i] != 0)
        {
            effVector[k].val = source[i];
            effVector[k].pos =i;
            k++;
        }
    }

}

void reconstruct(int source[], int m, const struct Q3Struct effVector[], int n)
{
    int i; 
    int index;
    int value;
    for (i = 0; i < n; i++)
    {
        index = effVector[i].pos;
        value = effVector[i].val;
        source[index] = value;   
    }
    
}
