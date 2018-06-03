#include "torture.h"
#include "debug.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {

    int count = 0;

    time_t t;
    srand((unsigned) time(&t));

    while(1) {
        printf("%d\n", count++);
    }

    return SUCCESS;

}
