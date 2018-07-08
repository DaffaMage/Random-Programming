#include <stdio.h>
#include <stdlib.h>

int loop(int x,int y)
{
    printf("%d\n",x);
    while (x>y)
    {
        return loop(x-1,y);
    }
}

int main()
{
    loop(100,20);
}
