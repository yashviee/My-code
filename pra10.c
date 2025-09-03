#include<stdio.h>
int main()
{
    int amt,choice;

    while(1){
    printf("1.burger(RS.150)\n 2.pizza(Rs.200)\n 3.pasta(Rs.120)\n 4.sandwitch(Rs.100)\n 5.french fries(Rs.80)\n 0.exit");
    printf("\n enter your choice:");
    scanf("%d",&choice);

    switch(choice)
    {
        case 1:
        printf("you selected burger");
        amt=amt+150;
        printf("\nyour total amount=%d",amt);
        scanf("%d",&amt);
        break;

        case 2:
        printf("you selected pizza");
        amt=amt+200;
        printf("\nyour total amount=%d",amt);
        scanf("%d",&amt);
        break;

        case 3:
        printf("you selected pasta");
        amt=amt+120;
        printf("\nyour total amount=%d",amt);
        scanf("%d",&amt);
        break;

        case 4:
        printf("you selected sandwitch");
        amt=amt+100;
        printf("\nyour total amount=%d",amt);
        scanf("%d",&amt);
        break;

        case 5:
        printf("you selected french fries");
        amt=amt+80;
        printf("\nyour total amount=%d",amt);
        scanf("%d",&amt);
        break;

        default:
        printf("you are exit");
    }
    }
    return 0;
}
