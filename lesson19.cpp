#include <iostream>
#include <vector>

using namespace std;

int main()
{
  vector<int> m;

  for (int i = 0; i < 10; i++)
    m.push_back(i);

  for (int i = 0; i < 10; i++)
    cout << m[i] << endl;;

  for (int i = 0; i < 10; i++)
    m[i] = m[i] * m[i];   

  cout << endl;

  for (int i = 0; i < 10; i++)
    cout << m[i] << endl;;

}
