/*
struct - A custom container that holds multiple
         pieces of related information.
         Similar to objects in other languages
*/


#include <stdio.h>
#include <stdbool.h>
#include <string.h>

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

void printStudent(Student param_student); //Function prototype

int main(){

    // struct Student Student1 = {"Zoro", 30, 2.5, true};

    Student Student1 = {"Zoro", 30, 2.5, true}; // new syntax after adding typedef
    Student Student2 = {"Naruto", 35, 3.5, false}; 
    Student Student3 = {0}; 

    strcpy(Student3.name, "Ichigo");
    Student3.age = 27;
    Student3.gpa = 4.0;
    Student3.isFullTime = true;

    printStudent(Student1);
    printStudent(Student2);
    printStudent(Student3);


    //print statements moved to function below

    // printf("%s\n", Student1.name); 
    // printf("%d\n", Student1.age); 
    // printf("%.2f\n", Student1.gpa); 
    // printf("%s\n", (Student1.isFullTime) ? "Yes" : "No"); 
    
    return 0;
}


void printStudent(Student param_student){

    printf("%s\n", param_student.name); 
    printf("%d\n", param_student.age); 
    printf("%.2f\n", param_student.gpa); 
    printf("%s\n", (param_student.isFullTime) ? "Yes" : "No"); 
    printf("\n");


};