#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number ;
    for(;;){
    printf("The lines number is :") ;
    scanf("%i",&number);
    for (int i=1;i<=number;i++)
    {
        for(int x=1;x<=((i*2)-1);x++)

            printf("*");
            printf("\n");

    }
    }
    return 0;
}
