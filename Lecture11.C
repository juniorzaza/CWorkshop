#include <stdio.h>

int main() {
    char nickname1[100], nickname2[100], nickname3[100];

    printf("Input your nickname 1 : ");
    gets(nickname1);  // ❌ ไม่แนะนำให้ใช้ เพราะไม่ปลอดภัย
    printf("Nickname 1 is %s\n", nickname1);

    printf("----------------------------\n");

    printf("Input your nickname 3 : ");
    gets(nickname3);  // ❌ ไม่ปลอดภัยเช่นกัน
    printf("Nickname 3 is %s\n", nickname3);

    printf("----------------------------\n");

    printf("Input your nickname 2 : ");
    scanf("%s", nickname2);  // ✅ ใช้ได้ แต่จะรับได้แค่ "คำแรก" เท่านั้น
    printf("Nickname 2 is %s\n", nickname2);

    return 0;
}