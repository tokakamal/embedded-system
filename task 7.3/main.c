#include <stdio.h>
#include <stdlib.h>
void flip(int a[5])
{
    int *p ;
    p=a;
    printf("\n The flipped array : \n");
    for(int i=4;i>=0;i--)
    {
        printf("\n %i \n",a[i]);
    }


}
int main()
{
    for(;;)
    {


    int a[5];
    printf("\nEnter the elements : \n");
    for(int i=0;i<5;i++){
        scanf("%i",&a[i]);

    }
    flip(a) ;
    }

    return 0;
}
