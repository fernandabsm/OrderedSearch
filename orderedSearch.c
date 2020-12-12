#include <stdio.h>
#include <stdlib.h>

int orderedSearch(int* v, int size, int element)
{
    for(int i = 0; i < size; i++)
    {
        if(v[i] == element)
        {
            return i;
        }
        else
        {
            if (v[i] > element)
            {
                return -1;
            }
            
        }
        
    }
    return -1;
}