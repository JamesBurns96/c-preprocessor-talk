#include "debug.h"
#include <stdlib.h>

#define INVALID_INPUT 2

int main(int argc, char* argv[]) {

#ifdef DANGER_LEVEL
#if DANGER_LEVEL == 0
    #pragma message "ALL CLEAR"
#elif DANGER_LEVEL == 1
    #warning DANGER
#else
    #error SHUT IT DOWN
#endif
#endif

    int a, b;
    int result;
    char* ptr;

    if(argc != 3) {
        DEBUG_PRINT("Wrong number of inputs\n");
        return INVALID_INPUT;
    }

    DEBUG_PRINT("Right number of inputs\n");

    a = strtol(argv[1], &ptr, 10);
    b = strtol(argv[2], &ptr, 10);
#ifdef ADDER_MODE
    result = add(a, b);
#else
    result = multiply(a, b);
#endif
    printf("Result = %d\n", result);

    return SUCCESS;

}
