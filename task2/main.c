#include <stdio.h>
#include <stdlib.h>
int ad(int x ,int y )
{int z ;
z=x+y ;
    return z ;
}
int min(int x ,int y )
{int z ;
z=x-y ;
    return z ;
}
int mult(int x ,int y )
{int z ;
z=x*y ;
    return z ;
}
void calculator () {
 int x , y , user ;
printf("press 1 for + \n press 2 for - \n press 3 for * \n press 4 for Exit \n");
while(1) {
printf("your process no is :");
scanf("%i",&user);
if (user==4){
    break;
}
 else if (user==1)
{ printf("x=",x);
scanf("%i",&x) ;
printf("y=",y) ;
scanf("%i",&y);
    printf("The answer is : %i\n",ad(x,y));
}
else if (user==2)
{ printf("x=",x);
scanf("%i",&x) ;
printf("y=",y) ;
scanf("%i",&y);
    printf("The answer is : %i\n",min(x,y));
}
else if (user==3)
{printf("x=",x);
scanf("%i",&x) ;
printf("y=",y) ;
scanf("%i",&y);
    printf("The answer is : %i\n",mult(x,y));
}

}
}

void cinema()

{
    int ticket_type ;

    printf("Choose your ticket type :\n for normal ticket 50 L.E press 1\n for VIP ticket press 2\n for VIP+POP corn press 3\n");
   scanf("%i",&ticket_type);

            if (ticket_type==1)
            printf("ok,get your normal ticket \n");
        else if (ticket_type==2)
                        printf("ok,get your VIP ticket\n");
        else if(ticket_type==3)
                        printf("ok,get your VIP ticket and your POP corn\n");


    }

int main()
{    int user_pick ;
for(;;){
            printf("choose how can I help you \n press 1 for calculations \n press 2 for cinema ticket\n");
                scanf("%i",&user_pick);

    if(user_pick==1)
    {
        calculator();
    }
    else if (user_pick==2)
    {
        cinema() ;
    }}
    return 0;

}
