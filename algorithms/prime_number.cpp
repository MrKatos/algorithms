#include <iostream>

bool is_prime(int arg)
{
    if (arg < 2)
    {
        return false;
    }
    for (int i = 2; i < arg-1; i++)
    {
        if (arg % i == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{   

    int prime_or_not_prime = 13;
    if (is_prime(prime_or_not_prime))
    {
        std::cout << prime_or_not_prime << " is prime!" << std::endl;
    }
    else
    {
        std::cout << prime_or_not_prime << " is not prime!" << std::endl;
    }

    std::cout<<"Podaj zakres od 0 do >";
    int zakres;
    std::cin>>zakres;
    for (int i = 0; i < zakres; i++)
    {
        if (is_prime(i))
        {
            std::cout << i << " ";
        }
    }
    return 0;
}