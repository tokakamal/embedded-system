#include <stdio.h>
#include <stdlib.h>
void flip(int a[5])
{
    int *p ;
    p=a;
    printf("\nEnter the elements : \n");
    for(int i=0;i<5;i++){
        scanf("%i",&a[i]);}
    printf("\n The flipped array : \n");
    for(int j=4;j>=0;j--){
        printf("\n %i \n",a[j]);}
}
void swap_array(int x[5] ,int y[5])
{
    int z[5]={0};
    int *ptr1, *ptr2, *ptr3 ;
    ptr1 = x;
    ptr2 = y;
    ptr3 = z ;
    ptr3 = ptr1;
    ptr1 = ptr2 ;
    ptr2 = ptr3 ;
    printf("Enter the first array: \n") ;
    for(int i=0 ; i<5 ; i++)
    scanf("%i",&x[i]) ;
    printf("Enter the second array: \n") ;
    for( int a=0 ; a<5 ; a++)
    scanf("%i",&y[a]) ;
    printf("\nAfter swapping \nThe first array is: \n");
    for(int i=0 ; i<5 ; i++){
            printf("%i \n" ,ptr1[i]) ;
    }
    printf("The second array is: \n") ;
    for( int a=0 ; a<5 ; a++){
            printf("%i \n",ptr2[a]) ;
    }
    printf("\n") ;
}
void swap(int m , int n)
{
    int z =0;
    int *p1 , *p2 , *p3 ;
    p1 =&m ;
    p2=&n ;
    p3 =&z ;
    printf("enter the first number : ");
    scanf("%i",&m);
    printf("\n enter the second number : ");
    scanf("%i",&n);
        *p3=*p1;
    *p1=*p2;
    *p2=*p3;

    printf("\n After swapping \n \n The first number is : %i \n",*p1);
    printf("\n The second number is : %i\n",*p2);
    printf("\n\n\n");


}
void func()
{
    int user_pick , a[5] , x[5] ,y[5] , m ,n ;
    printf(" \n press 1 to swap variables : \n press 2 to swap arrays : \n press 3 to flip an array : \n ");
    scanf("%i",&user_pick);
    if(user_pick==3)
    {
        flip(a) ;
    }
    else if (user_pick==2)
    {
        swap_array(x,y) ;
    }
    else if (user_pick==1)
    {
        swap(m,n) ;
    }
}


int main()
{
    for(;;)
    {
        func() ;
    }
    return 0;
}
