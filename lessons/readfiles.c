

#include <stdio.h>


int main() {


    FILE *pFile = fopen("/home/jose/source/c/lessons/input.txt", "r"); //file path uses "/" because im using linux

    char buffer[1024] = {0};

    if (pFile == NULL)
    {
        printf("Error opening file\n");
        return 1;
    }
    
    while (fgets(buffer, sizeof(buffer), pFile) != NULL)            
    {
        printf("%s", buffer);
    }
    

    fclose(pFile);



    return 0;
}