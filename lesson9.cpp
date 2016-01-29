#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
  int i;
  char c;

  do {

    srand(time(0));

    i = rand() % 100;
    while (true)
    {
      cout << "Я загадал число, какое? ";
      
      int j;
      cin >> j;

      if (i > j)
        cout << "Мое число больше. " << endl;
      else
      {
        if (i < j)
          cout << "Мое число меньше. " << endl;
        else
        {
          cout << "Ты угадал. " << endl;
          break;
        }
      }
    }

    cout << "Continue (y/n)? ";
    cin >> c;

  } while (c == 'y');
}
