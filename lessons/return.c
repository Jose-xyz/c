#include <stdio.h>

#include <stdbool.h> //must include to use bools


// return = returns a value back to where you call a function



//////////////////////Part 1

/*
int square(int num) // list data type of what youre returning 
{
    // int result = num * num;
    
    // return result; // return parameter is can be  a value or variable 

    return num * num; // this is more consise than above
}



double cube(double num){
    
    return num * num * num; 
}



int main(){

    // int x = square(2);
    // int y = square(3);
    // int z = square(4);

    int x = cube(2);
    int y = cube(3);
    int z = cube(4);


    printf("%d\n", x);
    printf("%d\n", y);
    printf("%d\n", z);


    return 0;

}
    */





//////////////////////////part 2

/*
bool ageCheck(int age){

    if(age >= 18){
        return true;
    }
    else{
        return false;
    }

}


int main(){

    int age = 21;

    if(ageCheck(age)){
        printf("Sign up");
    }
    else{
        printf("Cannot sign up");
    }


    return 0;
}
    */


int getMax(int x, int y){
    if (x > y)
    {
        return x;
    }
    else{
        return y;
    }
    
}



int main(){

    int max = getMax(7, 8);
    printf("%d", max);

    return 0; // 0 is a exit code
}