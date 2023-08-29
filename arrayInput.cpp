#include <iostream>

int main()
{
  std::string foods[10];
  int size = sizeof(foods) / sizeof(foods[0]);
  std::string temp;

  for (int i = 0; i < size; i++)
  {
    std::cout << "Enter the food you like or 'q' for quit #" << i + 1 << " : ";
    std::getline(std::cin, temp);
    if (temp == "q")
    {
      break;
    }
    else
    {
      foods[i] = temp;
    }
  }

  std::cout << "You like the following foods!" << std::endl;

  for (int i = 0; !foods[i].empty(); i++)
  {
    std::cout << foods[i] << std::endl;
  }
}