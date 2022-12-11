#include <iostream>
#include "Test.h"

int main(int argc, char** argv)
{  
   Test printer = Test();
   printer.Print(argc, argv);
   // std::cout << "Hello Tony Pieri" << std::endl;
  
    return 0;
}