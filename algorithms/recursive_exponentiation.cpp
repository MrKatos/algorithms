#include <iostream>

int factorial_r(int n) {
  if (n == 0)
  {
    return 1;
  }
  else 
  {
    return n * factorial_r(n - 1);
  }
}

int main()
{
  int n = 5;
  std::cout << n << "! = " << factorial_r(n) <<std::endl;
  return 0;
}
