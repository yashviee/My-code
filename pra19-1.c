#include<stdio.h>
int main()
{
     int i,j,n=5;

     for(i=1;i<=5;i++)
     {
         for(j=1;j<=i;j++)
         if(j%2==0)
         {
             printf("0");
         }
         else
        {
            printf("1");
         }
         printf("\n");
     }
     return 0;
}
