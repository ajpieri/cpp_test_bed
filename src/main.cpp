#include <iostream>
#include <stdlib.h>
#include <stdio.h>      /* printf, NULL */
#include <sstream>
#include "Test.h"
#include "Packer.h"

int main(int argc, char** argv)
{  
   Test printer = Test();
   Packer packer;
   do
   {
      std::cout << "argv: " << argv[1] << std::endl;
      
      // printer.Print(argc, argv);
      char * pEnd;
      uint64_t value = strtoull(argv[1], &pEnd, 0);
      std::cout << "value: " << value << std::endl;

      char* packedValue = packer.PackUint64(value);
      std::cout << "packedValue: " << packedValue << std::endl;

      uint64_t unpackedValue = 0;
      packer.UnpackUint64(packedValue, unpackedValue);
      std::cout << "unpackedValue: " << unpackedValue << std::endl;

      std::cin >> argv[1];
   }
   while(argv[1]);
   
  
    return 0;
}