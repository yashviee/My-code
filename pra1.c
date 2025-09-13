#include<stdio.h>
#include<limits.h>
#include<float.h>
#include<stddef.h>
#include<stdint.h>
int main()
{
    printf("=== data type sizes and ranges is c ===\n\n");
    //char
    printf("char:\n");
    printf(" size: %zu bytes\n",sizeof(char));
    printf(" range:%d to %d \n\n, CHAR_MIN_, CHAR_MAX");

    //UNSIGNED CHAR
    printf("unsigned char:");
    printf(" size:  %zu bytes\n",sizeof(unsigned char));
    printf("  range: 0 to %u\n\n", UCHAR_MAX);

    // INT
    printf("int:\n");
    printf(" size:  %zu bytes\n",sizeof(int));
    printf("  range: %d to %d\n\n",  INT_MIN,INT_MAX);

    // unsigned int
    printf("unsigned int");
    printf(" size:  %zu bytes\n",sizeof(unsigned int));
    printf("  range: 0 to %u\n\n", UINT_MAX);

    //SHORT
    printf("short:\n");
    printf(" size: %zu bytes\n",sizeof(short));
     printf("  range: %d to %d\n\n", SHRT_MIN,SHRT_MAX);

     //long
    printf("long:\n");
    printf(" size: %zu bytes\n",sizeof(long));
     printf("  range: %ld to %ld\n\n", LONG_MIN,LONG_MAX);

     //long long
    printf("long long:\n");
    printf(" size: %zu bytes\n",sizeof(long long));
     printf("  range: %lld to &lld\n\n", LLONG_MIN,LLONG_MAX);

     //unsigned long
    printf("unsignrd long:\n");
    printf(" size: %zu bytes\n",sizeof(unsigned long));
     printf("  range: o to %u\n\n",ULONG_MAX);

     //float
    printf("float:\n");
    printf(" size: %zu bytes\n",sizeof(float));
     printf("  range: %.10e to %.10e\n\n", FLT_MIN,FLT_MAX);

     //double
    printf("double:\n");
    printf(" size: %zu bytes\n",sizeof(double));
     printf("  range: %.10e to %.10e\n\n", DBL_MIN,DBL_MAX);

     // long double
    printf("long double:\n");
    printf(" size: %zu bytes\n",sizeof(long double));
     printf("  range: %.10Le to %.10Le\n\n", LDBL_MIN,LDBL_MAX);

     //SIZE T
    printf("size t:\n");
    printf(" size: %zu bytes\n",sizeof(size_t));
     printf("  max value: %zu\n\n", (size_t)  -1);

     // ptrdif
    printf("ptrdiff:\n");
    printf(" size: %zu bytes\n",sizeof(ptrdiff_t));
     printf("  range: %td to %td\n\n", PTRDIFF_MIN,PTRDIFF_MAX);

     return  0;



}
