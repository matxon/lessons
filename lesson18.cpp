// Последовательность чисел должна быть отсортированна по возрастанию

#include <iostream>
#include <fstream>

using namespace std;

int main()
{
  ifstream f("file.txt");

  const int n = 100;
  int m[n];

  for (int i = 0; i < n; i++)
    f >> m[i];

  int x;
  float a;
  float l = 0;
  float r = 100;

  cout << "Введите искомое число ";
  cin >> x;

  a = (l + r) / 2;

  while ((m[(int)a] != x) && (r - l > 1))
  {
    if (m[(int)a] < x)
      l = a;
    else
      r = a;

    a = (l + r) / 2;
  }

  cout << "Число " << x << " находится по индексу " << (int)a << endl;

}
