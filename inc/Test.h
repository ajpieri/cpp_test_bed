#include <iostream>

class Test
{
public:
    Test()
    {
        // intentially empty
    }

    ~Test() = default;

    void Print(int argc, char** argv);
};