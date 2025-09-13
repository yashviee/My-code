#include<stdio.h>
int main()
{
    float i=0, a=0.5;
    while(i<=20)
    {
        printf("minute %f: distance covered:%f\n",i,a*i);
        i++;
    }
    return 0;
}
