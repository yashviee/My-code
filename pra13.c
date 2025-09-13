#include<stdio.h>
int main()
{
    int i,a=10;

    for(int i=0; i<=10; i++)
    {
         if (a*i==100)
         {
             printf("tank is full %d\n",a*i);
         }
         else
         {
             printf("current water level is: %d\n", a*i,i);
         }
    }
    return 0;
}
