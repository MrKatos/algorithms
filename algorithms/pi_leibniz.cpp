#include <iostream>
#include <cmath>

double n_ty_wyraz(int arg)
{
    double a = ((2*arg)+1);
    double b = 1/a;
    return b;
}

double pi_leibniz(double arg)
{
    double pi = 1;
    int n = 1;
    do
    {
        pi = pi + pow(-1,n)*n_ty_wyraz(n);
        ++n;
    } 
    while (n_ty_wyraz(n-1) > arg);

    return pi;
}

int main()
{   
    double stop_at = 0.001;
    double pi_approx = pi_leibniz(stop_at);

    std::cout << "PI/4 :" <<pi_approx << std::endl;
    std::cout << "~PI :" <<4*pi_approx << std::endl;

    std::cout << "error: " << pi_approx - M_PI << std::endl;
    return 0;
}
