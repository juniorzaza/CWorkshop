#include "stdio.h"

void main()
{
    int a= 10;
    int b;

    b= ++a;
    printf("A = %d\n" , a);
    printf("B = %d\n" , b);
    printf("------------\n");

    b = a++;
    printf("A= %d\n", a);
    printf("B= %d\n", b);
    printf("------------\n");

}