#include <stdio.h>
#include <stdlib.h>
void func (int number , int skipped)
{
    for (int i =0;i<=number;i++)
    {
        if(i%skipped==0)
            continue;

            printf("%i\n",i);
    }

}

int main()
{
    for(;;)
    {int number , skipped ;
    printf("Please enter the number \n");
    scanf("%i",&number);
        printf("Please enter the skipped number \n");
    scanf("%i",&skipped);
    printf("The formula is \n");
    func(number,skipped) ;
    }
    return 0;
}
