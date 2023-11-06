#include <stdio.h>
#include <time.h>
#include "auth.h"

int main(void){

    /* Four digit password + null terminating char */
    int max_password_length = 5;
    char attemptPassword[max_password_length];

    /* Read max_password_length chars from stdin */
    fgets(attemptPassword, max_password_length, stdin);

    clock_t start;
    clock_t end;

    start = clock();
    int success = checkPassword(attemptPassword);
    end = clock();

    int elapsed = (int)(end - start);

    printf("Cycles elapsed: %d\n", elapsed);

    if (!success) {
        printf("Authentication failed\n");
    } else {
        printf("Success!\n");
    }

}
