#include "Test.h"

void Test::Print(int argc, char** argv)
{
    std::cout << "You have entered " << argc
         << " arguments:" << "\n";

    for (int i = 0; i < argc; ++i)
        std::cout << argv[i] << "\n";
}