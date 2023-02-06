#include "Packer.h"

char* Packer::PackLongLong(const unsigned long long& value) const
{
   std::size_t valueSize = sizeof(value);
   char* buffer = new char[valueSize];
   std::memset(buffer, value, valueSize);

   return buffer;
}

void Packer::UnpackUint64(const char* packedBuffer, uint64_t& value) const
{
   std::cout << "In Unpack, size: " << sizeof(value) << std::endl;
   std::memcpy(&value, packedBuffer, sizeof(value));
}

uint64_t Packer::UnpackUint64(const char* packedBuffer) const
{
   uint64_t value = 0;
   std::memcpy(&value, packedBuffer, sizeof(value));

   return value;
}

char* Packer::PackUint64(const uint64_t& value) const
{
   std::size_t valueSize = sizeof(value);
   char* packedBuffer = new char[valueSize];

   std::memcpy(packedBuffer, &value, valueSize);

   return packedBuffer;
}
