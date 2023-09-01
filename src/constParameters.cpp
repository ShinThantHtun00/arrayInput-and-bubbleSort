#include <iostream>

void printInfo(const std::string name, const int age);

int main()
{
  std::string name = "Shin Thant Htun";
  int age = 17;

  printInfo(name, age);
}

void printInfo(const std::string name, const int age)
{
  std::cout << "My name is " << name << '\n';
  std::cout << "I am " << age << " years old," << '\n';
}
