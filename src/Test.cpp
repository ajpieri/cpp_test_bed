#include "Test.h"

void Test::Print(int argc, char** argv)
{
   std::cout << "You have just entered " << argc << " argument(s):" << "\n";
   
   for (int i = 0; i < argc; ++i)
   {
     std::cout << "argv[" << i << "]: " << argv[i] << "\n";
   }
}