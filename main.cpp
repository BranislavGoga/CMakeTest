#include "version.h"

#include "Function.h"

#include <iostream>

int main()
{
    std::cout 
		<< "Hello CMake '" << Version::Major << "." << Version::Minor << "." << Version::Patch << "." << Version::Tweak << "'!" << std::endl;

	std::cout
		<< "Function::sqr(7) = " << Function::sqr(7) << std::endl;

    return EXIT_SUCCESS;
}