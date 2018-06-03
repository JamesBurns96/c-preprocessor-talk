#ifndef _DEBUG_H_
#define _DEBUG_H_

#include <stdio.h>
#include "unguarded.h"

#define SUCCESS 0
#define FAILURE 1

#define DEBUG 1
#define DEBUG_PRINT(...) if(DEBUG){ \
    fprintf(stderr, "%s:%d: ", __FILE__, __LINE__); \
    fprintf(stderr, __VA_ARGS__); \
    fprintf(stderr, "\n"); \
}

int multiply(int a, int b);
int add(int a, int b);

#endif
