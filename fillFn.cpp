#include <iostream>

int main()
{
  const int SIZE = 12;
  std::string foods[SIZE];

  fill(foods, foods + (SIZE / 3), "pizza");
  fill(foods + (SIZE / 3), foods + (SIZE / 3) * 2, "humburger");
  fill(foods + (SIZE / 3) * 2, foods + SIZE, "hot dog");

  for (std::string food : foods)
  {
    std::cout << food << std::endl;
  }
}