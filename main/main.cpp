#include <cstdlib>
#include <iostream>
#include "example.h" // no se porque no lo toma
#include "codigo1.h"
#include "codigo2.h"
#include "codigo3.h"

int main(int argc, char** argv)
{
    foobar::Example example{};
    std::cout << "Example.getValue() => " << example.getValue() << std::endl;
    int cod1= codigo1(3,4);
    //codigo2();
   // codigo3();

    return EXIT_SUCCESS;
}
