#include <stdio.h>

int main() {


    int length = 70;
    int breadth = 90;
    int area, perimeter;


    area = length * breadth;


    perimeter = 2 * (length + breadth);


    printf("For a park with length = %d meters and breadth = %d meters:\n", length, breadth);
    printf("Area of the park = %d square meters\n", area);
    printf("Perimeter of the park = %d meters\n", perimeter);

    return 0;
}
