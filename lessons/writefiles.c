// Write to a file
// There is a built in struct in #include <stdio.h> called "struct FILE"




#include <stdio.h>


int main() {

    // FILE *pFile = fopen("output.txt", "w");

    FILE *pFile = fopen("/home/jose/source/c/lessons/output.txt", "w"); //file path uses "/" because im using linux

    char text[] = "So you wanna be a Master of Pokémon? Do you have the skills to be Number One?";

    if (pFile == NULL)
    {
        printf("Error opening file\n");
        return 1;
    }
    
    fprintf(pFile, "%s", text);

    printf("File has been written to\n");

    fclose(pFile);



    return 0;
}


