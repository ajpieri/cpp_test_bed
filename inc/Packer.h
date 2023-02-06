#include <iostream>
#include <sstream>
#include <cstdlib>

class Packer
{
public:
    Packer() = default;

    ~Packer() = default;

    char* PackLongLong(const unsigned long long& value) const;
    char* PackUint64(const uint64_t& value) const;
    uint64_t UnpackUint64(const char* packedBuffer) const;
    void UnpackUint64(const char* packedBuffer, uint64_t& value) const;
};