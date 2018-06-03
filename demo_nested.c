#include "nested.h"
#include "debug.h"

int main(void) {

    FUNC(1);

#include "nested.h"

    FUNC(2);

#include "nested.h"

    FUNC(3);

    return SUCCESS;

}
