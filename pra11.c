#include <stdio.h>

int main() {
    int marks;
    printf("Enter your marks: ");
    scanf("%d", &marks);

    if (marks >= 90)
        printf("You get A grade\n");
    else if (marks >= 80)
        printf("You get B grade\n");
    else if (marks >= 70)
        printf("You get C grade\n");
    else if (marks >= 60)
        printf("You get D grade\n");
    else if (marks >= 50)
        printf("You get E grade\n");
    else
        printf("You get F grade\n");

    return 0;
}
