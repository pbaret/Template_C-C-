#include <stdio.h>
#include "cpp_foo_lib.h"
#include "c_functions.h"

int main(int argc, char** argv)
{
    printf("Hello from C program\n");
    printf("CPP function: %d\n", (int)FooCpp());
    printf("C function  : %d\n", (int)CFunction1());

    return 0;
}
