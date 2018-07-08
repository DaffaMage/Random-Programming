#include <stdio.h>
#include <stdlib.h>
#include "comparison.h"

int loop(int x)
{
    return x*x;
}

int hNumber(int input)
{
    int o[10], temp=0,i;

    for (i=0;i<input;i++)
    {
        scanf("%d",&o[i]);
        if (temp==0 && i==0)
            temp = o[i];
        else if (o[i]>temp)
            temp = o[i];
    }
    return temp;
}
