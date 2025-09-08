#include<stdio.h>
int main()
{
    int sticks=21,user,comp;
    while(sticks>1)
    {
    printf("\n choose the number of matchsticks(1-4):");
    scanf("%d",&user);

    if(user<1 || user>4)
    {
        printf("\n invalid number!");
    }
    sticks=sticks-user;
    if(sticks==1)
    {
        printf("\n you lose the game");
        break;
    }
    comp=5-user;
    printf("\n computer pick %d sticks",comp);
    sticks=sticks-comp;
    printf("\n now the number of sticks=%d",sticks);
    if(sticks==1)
    {
        printf("computer lose the game");
    }
    }
    return 0;
}
