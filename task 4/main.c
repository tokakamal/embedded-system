#include <stdio.h>
#include <stdlib.h>
int number(int x)
{int  y =1;
for(int i=0;i<x;i++)
{
    y=y*x ;
}
return y ;
}
int main()
{
    int x ;
    printf("please enter the number\n");
    scanf("%i",&x);
    printf("The result is %i\n",number(x));
    return 0;
}
