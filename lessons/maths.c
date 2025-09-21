#include <stdio.h>

int main (){
    // arithmetic operators = + - * / % ++ --

    int x = 10;
    int y = 20;
    int z = 0;
    float w = 2.9;

   // z = x + y;
   // z = x - y; 
   // z = x * y;
   // z = x / y;
    z = x % 2; // get remainder

   //augumented assignment operators
   // x+=2; // same as  x = x + 2
   // x-=2; // same as  x = x - 2
   // x*=2; // same as  x = x * 2
    x/=2; // same as  x = x / 2

   printf("Love maths %d\n", x);
   printf("Love maths %d\n", z);


    return 0;
}