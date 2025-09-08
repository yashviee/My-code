#include<stdio.h>
int main()
{
    int balance=5000,amt;

    while(1)
    {
    printf("\n Enter amount to withdrow cash:");
    scanf("%d",&amt);
        if(amt==0)
        {
            break;
        }
        if(amt<0)
        {
            printf("invalid amount!");
        }
        else if(amt>balance)
        {
            printf("insufficient balance!\n");
        }
        else
        {
        balance=balance-amt;
        printf("now balance in your account=%d",balance);
        }
    }
    return 0;
}
