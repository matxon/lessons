// Урок 16
// Чтение из файла

#include <iostream>
#include <fstream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
  ifstream f("file.txt");

  for (int i = 0; i < 10; ++i)
  {
    int v;
    f >> v;
    cout << v << endl;
  }

  ofstream of("file.txt");

  srand(time(0));

  for (int i = 0; i < 100; ++i)
  {
    of << (rand() % 1000) << endl;
  }
}
