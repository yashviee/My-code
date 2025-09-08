#include<stdio.h>
int main()
{
    int age;
    printf("enter your age:");
    scanf("%d",&age);
    if(age<=12)
    {
    printf("you will get free ticket");
    }
    else
    {
        printf("you will not get free ticket");
    }

  return 0;
}
