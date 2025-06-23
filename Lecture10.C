#include <stdio.h>

int main() {
    char xx, yy, zz;

    // รับค่าตัวอักษรตัวที่ 1 ด้วย getchar()
    printf("Input xx value : ");
    xx = getchar();    // ต้องกด Enter หลังจากพิมพ์
    getchar();         // อ่าน newline ทิ้ง (เพราะ Enter ค้างอยู่)
    putchar(xx);

    printf("\n-------------------------\n");

    // รับค่าตัวอักษรตัวที่ 2
    printf("Input yy value : ");
    yy = getchar();
    getchar();         // อ่าน newline ทิ้ง
    putchar(yy);

    printf("\n-------------------------\n");

    // รับค่าตัวอักษรตัวที่ 3
    printf("Input zz value : ");
    zz = getchar();
    putchar(zz);

    return 0;
}