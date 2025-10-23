/*
typedef = reserved keyword that gives an existing datatype  a "nickname"
          Helps simplify complex types and improves code readability 
  
          typedef existing_type new_name;
*/

#include <stdio.h>


typedef char String[50];

int main(){

    String name = "Jose Sosa"; // uses typedef

    char fakeName[] = "Gustavo Diaz"; // does not use type def

    printf("%s\n", name);

    printf("%s", fakeName);

    return 0;
}