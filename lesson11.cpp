#include <iostream>
#include <cmath>

using namespace std;

int f(int x)
{ 
  cout << x << endl;
  cout << "Correct (+/-/=)? ";
  char c;

  while (true)
  {
    cin >> c;
    
    switch (c)
    {
      case '+': return 1;
      case '-': return -1;
      case '=': return 0;
    }

    cout << "Повторите ввод (ошибка) " << endl;
  }
}

float n(float x1, float x2)
{
  int x = (x1 + x2) / 2;
  int y = f(x);

  while (abs(y) > 0.0001)
  {
    if (y < 0)
      x1 = x;
    else
      x2 = x;

    x = (x1 + x2) / 2;
    y = f(x);
  }
  return x;
}

int main()
{
  cout << "Вы загодали: " << n(0, 100) << endl;
}
