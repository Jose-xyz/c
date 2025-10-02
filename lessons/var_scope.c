#include <stdio.h>

/*
variable scope = refers to where a variable is recognized and accessible
                 Variables can share the sanme name if
                 theyre in different scopes {}

Functions cant see inside of other functions
*/


//int result = 0; // This variable is in the GLOBAL Scope
                  // Not a best practice, it also harder to debug
                  // this will work but yeah

int add(int x, int y){     // we use the name "result" inside here as a local variable
    int result = x + y;
    return result;
}

int main(){                 // we also use the name "result" as well in the main
                            // because they dont know of each other

    int result = add(50, 74);

    printf("%d", result);

    return 0;
}

