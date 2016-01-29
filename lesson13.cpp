// 13 Урок

#include <iostream>

using namespace std;

class A 
{
public:
  int x;
  int y;
};

int main()
{
  int a[10];  // array
  A b[10];    // class A
  
  a[5] = 15;
  cout << a[5] << endl;
  // cout << a[5000] << endl; // segmentation fault

  for (int i = 0; i < sizeof(a)/sizeof(a[0]); ++i)
    a[i] = i * i;

  cout << a[5] << endl;

  for (int i = 0; i < sizeof(a)/sizeof(a[0]); ++i)
    cout << a[i] << endl;

  for (int i = 0; i < sizeof(b)/sizeof(b[0]); ++i)
  {
    b[i].x = i * i;
    b[i].y = i;
  }

  for (int i = 0; i < sizeof(b)/sizeof(b[0]); ++i)
  {
    cout << b[i].y << " " << b[i].x << endl;
  }
}
