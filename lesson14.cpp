#include <iostream>
#include <cmath>

using namespace std;

int main()
{
  const int H = 18;
  const int W = 68;
  char m[H][W];

  for (int y = 0; y < H; ++y)
    for (int x = 0; x < W; ++x)
      m[y][x] = '.';

  for (int x = 0; x < W; ++x)
  { 
    int y = (sin(x * 2 * M_PI / W) + 1) / 2 * H;
    m[y][x] = '*';
  }

  for (int y = 0; y < H; ++y)
  {
    for (int x = 0; x < W; ++x)
      cout << m[y][x];
    cout << endl;
  }
}
