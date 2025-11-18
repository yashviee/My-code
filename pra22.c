#include<stdio.h>
int main()
{
    int i,seat,r,c,j,a[5][10];
    printf("ENTER THE NO OF RESERVED SEATS =");
    scanf("%d",&seat);
    for(i=0;i<seat;i++)
    {
        printf("ENTER ROW AND SEAT NUMBER FOR RESERVED SEAT :");
        scanf("%d %d",&r,&c);
        a[r-1][c-1]='X';
        }

        printf("\n\t SEATING CHART\n");
    for(i=0;i<5;i++)
    {
        for(j=0;j<10;j++)
        {
            if(a[i][j]==a[r-1][c-1])
            {
                printf("%c ",'X');
            }
            else
            {
                printf("0 ");
            }
        }
        printf("\n");
        }
        return 0;
}
