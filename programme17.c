#include<stdio.h>
int main()
{

    int n,sumattened,totalsum=0,absentid;

    printf("total number of participants:");
    scanf("%d", &n);
    int attendentid[n-1];

    printf("enter the attendent participant : %d \n",n-1);

    for(int i=0; i<n-1; i++)
    {
        scanf("%d",&attendentid[i]);
        sumattened = sumattened + attendentid[i];

    }
        totalsum=n*(n+1)/2;
        absentid = totalsum - sumattened;
        printf("absentid is:%d \n",absentid);
        return 0;
}
