#include <iostream>
int divide(int a, int b)
{
  return a/b;
}

int substract(int a, int b)
{
  return a-b;
}

int add(int a, int b)
{
  return a+b;
}

int main()
{
  std::cout << "add(4,5)" << add(4,5);
  std::cout << "subtract(4,5)" << subtract(4,5);
}
