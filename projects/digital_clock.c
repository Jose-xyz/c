//Digital Clock


#include <stdio.h>
#include <time.h>
#include <stdbool.h>
#include <unistd.h>


int main()
{
 
    
    time_t rawtime = 0; // jan 1 1970 (Epoch)
    struct tm *pTime = NULL; // tm is from time.h
    bool isRunning = true;

    printf("Digi Clock\n");

    while (isRunning)
    {
        time(&rawtime);
        
        pTime = localtime(&rawtime);
        
        printf("\r%02d:%02d:%02d", pTime->tm_hour, pTime->tm_min, pTime->tm_sec); //deference our pointer then get me current hour
        fflush(stdout);
        sleep(1);
    }
    

    
    
    return 0;
}
