#include <stdio.h>
int main() {
    int n, i, num;
    int min, max, sum = 0;
    float avg;

    printf("++++++++++++++++++++++++++++++++++++\n");
    printf("             Program  Number\n");
    printf("++++++++++++++++++++++++++++++++++++\n");
    printf("Enter number total : ");
    scanf("%d", &n);
    printf("++++++++++++++++++++++++++++++++++++\n");

    for (i = 1; i <= n; i++) {
        printf("Number %d : ", i);
        scanf("%d", &num);

        if (i == 1) min = max = num;
        if (num < min) min = num;
        if (num > max) max = num;

        sum += num;
    }

    avg = (float)sum / n;

    printf("++++++++++++++++++++++++++++++++++++\n");
    printf("Minimum number is : %d\n", min);
    printf("Maximum number is : %d\n", max);
    printf("Sum number is : %d\n", sum);
    printf("Average number is : %.2f\n", avg);
    printf("++++++++++++++++++++++++++++++++++++\n");

    return 0;
}
