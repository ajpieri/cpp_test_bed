#include <iostream>
#include "Test.h"

int main(int argc, char** argv)
{  
    Test printer = Test();
    printer.Print(argc, argv);
  
    return 0;
}