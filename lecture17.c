//โจทย์: โปรแกรมตรวจสอบสายรถเมล์ 
//จากการป้อนข้อมูลสายรถเมล์จากผู้ใช้งานและแสดงข้อความออกมา
// กรณีผู้ใช้งานป้อนสาย 3  แสดงข้อความ Go to Sanamlung
// กรณีผู้ใช้งานป้อนสาย 123 แสดงข้อความ Go to Pinkloa
// กรณีผู้ใช้งานป้อนสาย 84  แสดงข้อความ Go to Wat Rai King
// กรณีผู้ใช้งานป้อนสาย 81  แสดงข้อความ Go to Oam Noi
// กรณีผู้ใช้งานป้อนสายอื่นๆ แสดงข้อความ Don't have data of BUS Number

#include <stdio.h>

int main(){
    int busNo;

    printf("Input bus number : ");
    scanf("%d", &busNo);
    printf("--------------------------\n");

    switch( busNo ){
        case 3 : 
            printf("Go to Sanamlung"); 
            break;
        case 123 : 
            printf("Go to Pinkloa"); 
            break;
        case 84 : 
            printf("Go to Wat Rai King"); 
            break;
        case 81 : 
            printf("Go to Oam Noi"); 
            break;
        default : 
            printf("Don't have data of BUS Number");
    }

    return 0;
}