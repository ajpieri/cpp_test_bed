#include "Test.h"

void Test::Print(int argc, char** argv)
{
   std::cout << "argc: " << argc << std::endl;
   std::cout << "You have just entered " << argc << " argument(s):" << std::endl;
   
   for (int i = 0; i < argc; ++i)
   {
     std::cout << "argv[" << i << "]: " << argv[i] << std::endl;
   }
}