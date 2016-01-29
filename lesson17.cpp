// Урок 17
// Пузырковая сортировка

#include <iostream>
#include <fstream>

using namespace std;

int main()
{
  int n = 10;
  int a[n];

  ifstream f("file.txt");

  for (int i = 0; i < 10; i++)
  {
    f >> a[i];
  }

  for (int i = n - 1; i >= 0; i--)
    for (int j = 0; j < i; j++)
    {
      if (a[j] > a[j + 1])
      {
        int temp;
        temp = a[j];
        a[j] = a[j + 1];
        a[j + 1] = temp;
      }
    }

  for (int i = 0; i < 10; i++)
  {
    cout << a[i] << endl;
  }
}
