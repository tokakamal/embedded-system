#include <stdio.h>
#include <stdlib.h>
#define x 10
#define y 5
void Battery_law()
{
    int bat_case ;
    scanf("%i",&bat_case);
    if(bat_case==x){printf("\n pattery full , please remove the battery \n");}
    else if (bat_case>x){printf("\n battery motafagera hazeeena\n");}
    else if (bat_case<x,bat_case>=y){printf("\n battery is normal\n");}
    else if (bat_case<y){printf("\n battery law \n");}

}



int main()
{
    for(;;){
        printf("\n enter the battery current value\n");
                Battery_law() ;

    }




    return 0;
}
