#include <stdio.h>

void main(){
    int aa;
    float bb;
    char cc[50];
    char dd, ee, ff, gg;

    printf("Input aa value : ");
    scanf("%d", &aa);
    printf("AA value is %d", aa);

    printf("\nInput bb value : ");
    scanf("%f", &bb);
    printf("BB value is %f\n", bb);
    printf("BB value is %.2f\n", bb);
    printf("BB value is %.4f\n", bb);

    printf("Input cc value : ");
    scanf("%s", &cc);
    printf("CC value is %s\n", cc);
}