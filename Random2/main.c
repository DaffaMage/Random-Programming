#include <stdio.h>
#include <stdlib.h>
#include "comparison.h"

int main()
{
    int y;
    scanf("%d",&y);
    int x = loop(y);
    printf("%d\n",x);

    int z = x*y;
    printf("%d\n\n",z);

    int a,b,c;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    if (a>b && a>c)
        printf("Biggest is A");
    else if (b>c && b>a)
        printf("Biggest is B");
    else
        printf("Biggest is C");
    printf("\n\n");


    //Max 15 lines for programming 10 input to find highest number
    printf("%d",hNumber(10));
    return 0;
}
