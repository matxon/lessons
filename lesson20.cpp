#include <iostream>
#include <fstream>
#include <vector>
#include <string>

using namespace std;

class Number
{
public:
  string name;
  string number;

  //Number(const Number &v): 
    //name(v.name),
    //number(v.number){}

  Number() {}

  //const Number &operator=(const Number &v)
  //{
    //name = v.name;
    //number = v.number;
    //return v;
  //}
};


int main()
{
  fstream f("tel.txt");
  vector<Number> telBook;

  while (true)
  {
    Number t;

    if (f.eof())
      break;
    else
      f >> t.number;

    if (f.eof())
      break;
    else
      f >> t.name;

    telBook.push_back(t);
  }

  while (true)
  {
    cout << "Введите имя (или стоп)";
    string name;
    cin >> name;
    
    if (name == "стоп")
      break;

    for (int i = 0; i < telBook.size(); ++i)
    {
      if (telBook[i].name == name)
      {
        cout << name << " " << telBook[i].number << endl;
      }
    }
  }
}
