#include "cpp_foo_lib.h"
#include <iostream>

int main(int argc, char** argv)
{
    std::cout << "Hello from C++ Test program" << std::endl;
    std::cout << "Value of Foo " << (int)FooCpp() << std::endl;
    return 0;
}