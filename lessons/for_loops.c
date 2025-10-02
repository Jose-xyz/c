#include <stdio.h>
// #include <windows.h> //for windows
#include <unistd.h> //linux/max



int main(){

for(int i = 5; i > 0; i--){
    sleep(1);
    printf("%d\n", i);
}

printf("Food is done!");

    return 0;
}


/*

for loop

repeat some code a limited # of times 
for(initialization; condition; update)


*/