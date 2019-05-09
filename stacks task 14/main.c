#include <stdio.h>
#include <stdlib.h>
int* push(int *sp )
{
    printf("\nEnter the value you want to push :");
    scanf("%i",sp) ;
    sp++;
    return(sp) ;
}
int* pop (int *sp)
{
    sp--;
    *sp=0;
    return sp ;

}
Print(int Stack[],int size )
{
            printf("\nyour stack : \n");

    for (int i=0;i<size;i++)
    {
     printf("%i\n",Stack[i]);
    }
}






int main()
{



    int Stack[10]={0} , *sp ;
    sp=Stack;
    int user_pick ;
    while(1)
    {
    printf("\n press 1 to push \n press 2 to pop \n press 3 to see your stack \n") ;
    scanf("%i",&user_pick) ;


    if (user_pick==1)
    {
        sp=push(sp);

        printf("Stack %i\n",Stack[0]) ;
                printf("Stack %i\n",Stack[1]) ;


    }
    else if (user_pick==2)
    {
        sp=pop(sp) ;
        printf("stack %i\n",Stack[0]) ;
        printf("Stack %i\n",Stack[1]) ;
    }

    else if (user_pick==3)
    {
        Print(Stack,sizeof(Stack)/sizeof(int)) ;

    }
    else break ;

    }

    return 0;
}
