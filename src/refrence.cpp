#include <iostream>

void swapFn(std::string &cupA, std::string &cupB);

int main()
{
  std::string cupA = "Coffee";
  std::string cupB = "Water";
  swapFn(cupA, cupB);

  std::cout << "cupA: " << cupA << std::endl;
  std::cout << "cupB: " << cupB << std::endl;
}

void swapFn(std::string &cupA, std::string &cupB)
{
  std::string temp;

  temp = cupA;
  cupA = cupB;
  cupB = temp;
}