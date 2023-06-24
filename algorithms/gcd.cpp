#include <iostream>

int gcd(int a, int b)
{
    int c = a % b;
    a = b;
    b = c;
    if (b == 0)
    {
        return a;
    }else
    {
        return gcd(a,b);
    }
}

int main()
{   
    std::cout << gcd(18, 17);
    return 0;
}
