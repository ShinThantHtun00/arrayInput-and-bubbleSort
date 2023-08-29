#include <iostream>

int main()
{
  int numbers[] = {9, 10, 8, 5, 6, 3, 1, 4, 2, 7};
  int size = sizeof(numbers) / sizeof(int);
  std::cout << sizeof(numbers) << std::endl;
  std::cout << sizeof(int);
}
int searchInArray(int array[], int size, int element);

int main()
{
  int numbers[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  int size = sizeof(numbers) / sizeof(numbers[0]);
  int index;
  int myNumber;

  std::cout << "Enter a number to search in Array : ";
  std::cin >> myNumber;

  index = searchInArray(numbers, size, myNumber);

  if (index != -1)
  {
    std::cout << myNumber << " is at index " << index;
  }
  else
  {
    std::cout << myNumber << " is not in the array";
  }
}

int searchInArray(int array[], int size, int element)
{
  for (int i = 0; i < size; i++)
  {
    if (array[i] == element)
    {
      return i;
    }
  }
  return -1;
}