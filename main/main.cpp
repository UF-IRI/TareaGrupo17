#include <cstdlib>
#include <iostream>
#include "example.h"
#include "codigo1.h"

int main(int argc, char** argv)
{
    foobar::Example example{};
    std::cout << "Example.getValue() => " << example.getValue() << std::endl;
    codigo1();

    return EXIT_SUCCESS;
}
