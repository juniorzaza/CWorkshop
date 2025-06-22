#include <stdio.h>

int main(){
    int busNo;

    printf("Input bus number : ");
    scanf("%d", &busNo);
    printf("--------------------------\n");

    if (busNo == 3)
        printf("Go to Sanamlung");
    else if (busNo == 123)
        printf("Go to Pinkloa");
    else if (busNo == 84)
        printf("Go to Wat Rai King");
    else if (busNo == 81)
        printf("Go to Oam Noi");
    else
        printf("Don't have data of BUS Number");

    return 0;
}