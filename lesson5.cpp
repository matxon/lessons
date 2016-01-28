#include <iostream>

using namespace std;

int main()
{
  float x;
  float y;
  char o;
  char d ='y';

  do {
    cout << "Правило исползования число операция число" << endl;

    cin >> x;
    cin >> o;
    cin >> y;

    cout << x << o << y << "=";
    float r;

    switch (o)
    {
      case '+':
        r = x + y;
        break;
      case '-':
        r = x - y;
        break;
      case '*':
        r = x * y;
        break;
      case '/':
        r = x / y;
        break;
    }
    cout << r << endl;
    cout << "Continue (y/n)? ";
    cin >> d;
  }
  while (d =='y');
}
