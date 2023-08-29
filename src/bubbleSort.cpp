#include <iostream>

using namespace std;

void bubbleSort(int array[], int size);

int main()
{
  int numbers[] = {9, 10, 8, 5, 6, 3, 1, 4, 2, 7};
  int size = sizeof(numbers) / sizeof(numbers[0]);

  bubbleSort(numbers, size);

  for (int number : numbers)
  {
    cout << number << " ";
  }
}

void bubbleSort(int array[], int size)
{
  int temp;
  for (int i = 0; i < size - 1; i++)
  {
    for (int j = 0; j < size - i - 1; j++)
      if (array[j] > array[j + 1])
      {
        temp = array[j];
        array[j] = array[j + 1];
        array[j + 1] = temp;
      }
  }
}