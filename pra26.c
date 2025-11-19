#include<stdio.h>
#include<math.h>

void triangle(int s1,int s2,int s3)
{
    if(s1>0 && s2>0 && s3>0 &&
       s1+s2>s3 && s1+s3>s2 && s2+s3>s1)
        printf("valid triangle\n");
    else
        printf("invalid triangle\n");
}

int S(int s1,int s2, int s3)
{
    return (s1+s2+s3)/2;
}

int area(int s1,int s2,int s3,int s)
{
    return sqrt(s*(s-s1)*(s-s2)*(s-s3));
}

int main()
{
    int s1,s2,s3,s;

    printf("Enter 1st side=");
    scanf("%d", &s1);
    printf("Enter 1st side=");
    scanf("%d", &s2);
    printf("Enter 1st side=");
    scanf("%d", &s3);

    triangle(s1,s2,s3);

    if(s1>0 && s2>0 && s3>0 &&
       s1+s2>s3 && s1+s3>s2 && s2+s3>s1)
    {
        s = S(s1,s2,s3);
        printf("s=%d\n", s);

        printf("area=%d\n", area(s1,s2,s3,s));
    }
    else
        printf("area=0\n");

    return 0;
}
