#include <stdio.h>
#ifdef INC1
#ifdef INC2
#define FUNC(x) printf("v3 print %i\n", x)
#else
#define INC2
#define FUNC(x) printf("v2 print %i\n", x)
#endif
#else
#define INC1
#define FUNC(x) printf("v1 print %i\n", x)
#endif
