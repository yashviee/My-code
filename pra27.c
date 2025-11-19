#include<stdio.h>
int recursion(int n)
{
    if(n==0)
        return 15;
    if(n==1)
        return 20;
        return recursion(n-1)+recursion(n-2);

}
int main()
{
    int month;
    printf("enter the month:");
    scanf("%d", &month);
    printf("Your savings in thousands is %d", recursion(month));
    return 0;
}
