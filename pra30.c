#include<stdio.h>
int main()
{
    printf("Yashvi Gujarati-25CE035\n");

    float arr[6];
    float i,j,max=0;
    float *p=arr;
    int valid=0;
    printf("Enter your prices:\n");
    for(i=0;i<6;i++)
    {
       valid= scanf("%f",p);


        if(valid!=1)
        {
            printf("Please enter correct input");
            return 0;
        }

        else
 p++;
    }

    float *p1=arr+1;
    for(p=arr;p<arr+6;p++)
    {
        for(p1=p+1;p1<arr+6;p1++)
        {
            if(*p>*p1)
           {
            max=*p;
            *p=*p1;
            *p1=max;
           }
        }

    }
    for(p=arr;p<arr+6;p++)
    {
        printf("%f\n",*p);
    }
return 0;
}
