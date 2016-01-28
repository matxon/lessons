#include <iostream>
#include <cmath>

using namespace std;

float dist(float v, float a)
{
  return v * v * sin(2 * a * M_PI / 180) / 9.81;
}

int main()
{
  float v;
  float a;

  cout << "Введите скорость в м/с: ";
  cin >> v;

  float d;
  float max_d = 0;
  float max_a;

  for (float a = 0; a < 90; a++)
  {
    d = dist(v,a);
    if (max_d < d)
    {
      max_d = d;
      max_a = a;
    }
  }
  cout << "Максимальный расстояние, м " << max_d << endl;
  cout << "Максимальный угол, градус " << max_a << endl;
}
