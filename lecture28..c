//ประเภทของอาร์เรย์ มีอยู่ 4 ประเภท (แต่ใช้โดยทั่วไปอยู่ 2 ประเภท **)
// one dimension array อาร์เรย์ 1 มิติ ** มีแค่ 1 แถว
// เช่น int dataA[5]; คือ dataA มี 1 แถวจำนวน 5 ช่อง
 
// two dimension array อาร์เรย์ 2 มิติ ** มีมากกว่า 1 แถว
// เช่น int dataB[3][5];  คือ dataB มี 3 แถว แถวละ 5 ช่อง
 
// three dimension array อาร์เรย์ 3 มิติ
// เช่น int dataC[2][4][3];
 
// multi dimension array อาร์เรย์ หลาย มิติ
 
#include <stdio.h>
 
void main(){
    //one dimension array
    int dataA[3];
    int dataB[] = {11, 22, 33, 44};
 
    //two dimension array
    int dataC[2][5];
    int dataD[][3] = {
      {1, 2, 3},
      {11, 22, 33},
      {111, 222, 333},
      {1111, 2222, 3333}
    };
 
    dataA[2] = 999;
    dataD[1][2] = 55555;
 
}