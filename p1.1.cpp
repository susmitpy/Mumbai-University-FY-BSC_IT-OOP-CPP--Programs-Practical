#include <iostream>

using namespace std;

class Employee:

  Employee(char[] name, int id)
  {
    Employee.name = name;
    Employee.id = id;
  }
  public:
    displayInfo()
    {
      return Employee.getInfo();
    }

  private:
    getInfo()
    {
      return (Employee.name, Employee.id);
    }



int main()
{
  Employee emp("Susmit", 1001);
  cout << emp.displayInfo << endl;
  return 0;
}
