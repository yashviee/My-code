#include<stdio.h>
int main()
{
    int N[25],i,pos=0,neg=0,even=0,odd=0;

    printf("Enter 25 integers:\n");

    for(i=0; i<25; i++)
    {
        scanf("%d",&N[i]);
    }
    for(i=0;i<25;i++)
    {
        if(N[i]>=0)
        {
            pos=pos+1;
        }
        else
        {
            neg=neg+1;
        }
        if(N[i]%2==0)
        {
            even=even+1;
        }
        else
        {
            odd=odd+1;
        }
    }

    printf("the number of positive numbers=%d\n",pos);
    printf("the number of negetive numbers=%d\n",neg);
    printf("the number of even numbers=%d\n",even);
    printf("the number of odd numbers=%d\n",odd);

    return 0;
}
