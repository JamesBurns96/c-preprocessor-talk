#include "debug.h"

int multiply(int a, int b) {
    
    DEBUG_PRINT("Multiplying %i and %i...", a, b);
    return a * b;

}

int add(int a, int b) {

    DEBUG_PRINT("Adding %i and %i...", a, b);
    return a + b;

}
