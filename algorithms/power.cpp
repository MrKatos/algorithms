#include <iostream>
#include <vector>

uint64_t factorial(int arg)
{
    std::vector<int> root(arg);
    for (size_t i = 0; i < root.size(); i++)
    {
        static int value = 1;
        root[i] = value;
        ++value;
    }

    uint64_t multipy=1;

    for (size_t i = 0; i < root.size(); i++)
    {
        multipy = multipy*root[i];
    }
    return multipy;
}

int main()
{   
    uint64_t result = factorial(15);
    std::cout << result;
    return 0;    
}