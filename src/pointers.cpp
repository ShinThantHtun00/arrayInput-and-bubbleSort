#include <iostream>

int main()
{
  /*
  std::string name = "ShinThantHtun";
  int age = 18;
  std::string foods[4] = {"Pizza1", "Pizza2", "Pizza3", "Pizza4"};

  std::string *pName = &name;
  int *pAge = &age;
  std::string *pFoods = foods;

  std::cout << *pName << std::endl;
  std::cout << *pAge << std ::endl;
  std::cout << *pFoods;
  */

  int *pNumber = nullptr;
  int x = 12;
  pNumber = &x;

  if (pNumber == nullptr)
  {
    std::cout << "The pointer is not assigned!\n";
  }
  else
  {
    std::cout << "The pointer is addigned!\n";
    std::cout << pNumber;
  }
}