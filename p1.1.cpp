#include <iostream>
#include <string>

using namespace std;

class Employee{
  public:
    Employee(string n)  //Constructor
    {
      name = n;
    }

    string displayInfo()
    {
      return getInfo();  //calling private method
    }
  private:
    string name; // class member

    string getInfo()  //can be called only from within the class
    {
      return name;
    }



};

int main()
{
  Employee emp("Susmit");  //passing "susmit" to the  constructor
  cout << "Employee Info: " << emp.displayInfo() << endl;  //calling public method
  return 0;
}
