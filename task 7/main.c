#include <stdio.h>
#include <stdlib.h>
 swap(int *p1 , int *p2)
{
    int z =0;
    z=*p1;
    *p1=*p2;
    *p2=z;


}

int main()
{
    for(;;)
    {
    int m,n ;
    printf("enter the first number : ");
    scanf("%i",&m);
    printf("\n enter the second number : ");
    scanf("%i",&n);

        swap(&m,&n);

    printf("\n After swapping \n \n The first number is : %i \n",m);
    printf("\n The second number is : %i\n",n);
    printf("\n\n\n");

    }
    return 0;
}
