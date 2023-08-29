#include <iostream>

int main()
{
  std::string programmingLangs[][3] = {{"Java", "Flutter", "React Native"},
                                       {"C#", "JavaScirpt", "PHP"},
                                       {"C++", "C", "Rust"}};

  int rows = sizeof(programmingLangs) / sizeof(programmingLangs[0]);
  int columns = sizeof(programmingLangs[0]) / sizeof(programmingLangs[0][0]);

  for (int i = 0; i < rows; i++)
  {
    for (int j = 0; j < columns; j++)
    {
      std::cout << programmingLangs[i][j] << " , ";
    }
    std::cout << std::endl;
  }
  // std::cout << programmingLangs[0][0] << " , ";
  // std::cout << programmingLangs[0][1] << " , ";
  // std::cout << programmingLangs[0][2] << "\n";
  // std::cout << programmingLangs[1][0] << " , ";
  // std::cout << programmingLangs[1][1] << " , ";
  // std::cout << programmingLangs[1][2] << "\n";
  // std::cout << programmingLangs[2][0] << " , ";
  // std::cout << programmingLangs[2][1] << " , ";
  // std::cout << programmingLangs[2][2] << "\n";
}