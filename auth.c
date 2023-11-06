#include <stdio.h>
#include <string.h>
#include <unistd.h>

int checkPassword(char* attemptPassword){

    /* for now, hardcode in a 4-digit password */
    char* truePassword = "3825";

    int attemptLen = strlen(attemptPassword);
    int trueLen = strlen(truePassword);

    if (attemptLen != trueLen) {
        printf("Different lengths!\n");
        return 0;
    }

    for (int i = 0; i < attemptLen; i++) {
        sleep(1);
        if (attemptPassword[i] != truePassword[i]){
            return 0;
        }
    }

    return 1;
}
