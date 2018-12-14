#include <iostream>
#include <string>

using namespace std;

class Student
{
public:
  Student(string n)
  {
    name = n;
  }
  string displayData()
  {
    return getData();
  }
private:
  string name;

  string getData()
  {
    return name;
  }
};

int main()
{
  Student s("Susmit");
  cout << s.displayData() << endl;
  return 0;
}
