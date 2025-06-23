// Control Statement (Loop) คือ การทำงานเดิมๆ ซ้ำ
// มีคำสั่งที่ใช้อยู่ 3 คำสั่ง คือ while, do-while, for

// จด. โปรแกรมแสดงข้อความ Hello... ทางหน้าจอ 5 ข้อความ

#include <stdio.h>

void main() {
    int x;

    x = 0;
    while (x <= 5) {
        printf("Hello...\n");
        x = x + 1;
    }
}