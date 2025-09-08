#include<stdio.h>
int main()
{
    int n,i;
    printf("Enter the second:");
    scanf("%d",&n);

    for(i=n;i>=0;i--)
    {
        printf("your time count is:%d\n",i);
    }
    printf("your time count is complete!");
    return 0;
}

