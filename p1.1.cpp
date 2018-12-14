#include <iostream>
#include <string>

using namespace std;

class Employee{
  public:
    Employee(string n)
    {
      name = n;
    }

    string displayInfo()
    {
      return getInfo();
    }
  private:
    string name;

    string getInfo()
    {
      return name;
    }



};

int main()
{
  Employee emp("Susmit");
  cout << emp.displayInfo() << endl;
  return 0;
}
