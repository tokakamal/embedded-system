#include <stdio.h>
#include <stdlib.h>
void swap(int x[5] ,int y[5])
{
    int z[5]={0};
    int *ptr1, *ptr2, *ptr3 ;
    ptr1 = x;
    ptr2 = y;
    ptr3 = z ;
    ptr3 = ptr1;
    ptr1 = ptr2 ;
    ptr2 = ptr3 ;
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
int main()
    {
    for(;;){
    int x[5],y[5] ;
    printf("Enter the first array: \n") ;
    for(int i=0 ; i<5 ; i++)
    scanf("%i",&x[i]) ;
    printf("Enter the second array: \n") ;
    for( int a=0 ; a<5 ; a++)
    scanf("%i",&y[a]) ;
    swap(x,y) ;
}
    return 0;
}
