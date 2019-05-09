#include <stdio.h>
#include <stdlib.h>
 array_entery()
 {
     int a[100];
     int size ;
     int *ptr ;
     ptr = a ;
     printf("\n Enter the size of the array : \n");
     scanf("%i",&size);
     printf("\n Enter the elements of your array : \n");
     for(int i=0;i<size;i++)
     {
         scanf("%i",&a[i]);
     }
     printf("\n Your array is : \n");
     for(int i =0;i<size;i++){
        printf("%i \n",ptr[i]);
     }
 }
int main()
{
    for(;;)
        array_entery() ;
    return 0;
}
