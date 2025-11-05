/*
struct - A custom container that holds multiple
         pieces of related information.
         Similar to objects in other languages
*/


#include <stdio.h>
#include <stdbool.h>

/*
struct Student
{
    char name[50];
    int age;
    float gpa;
    bool isFullTime;
};
*/

typedef struct{
    char name[50];
    int age;
    float gpa;
    bool isFullTime;
} Student;
// new syntax after using typedef


int main(){

    // struct Student Student1 = {"Zoro", 30, 2.5, true};

    Student Student1 = {"Zoro", 30, 2.5, true}; // new syntax after adding typedef

   printf("%s\n", Student1.name); 
   printf("%d\n", Student1.age); 
   printf("%.2f\n", Student1.gpa); 
   printf("%s\n", (Student1.isFullTime) ? "Yes" : "No"); 
   return 0;
}