#include <iostream>

using namespace std;

class Employee
{
    char name[30];
    int id;
    void getInfo()
    {
            cout << "Enter name: ";
            cin  >>  name;
            cout << "Enter ID no. ";
            cin >> id;
    }
public:
    void displayInfo()
    {
        getInfo();
        cout << "Name: " << name << endl;
        cout << "ID: " << id << endl;
    }
};

int main()
{
    Employee e;
    e.displayInfo();
    return 0;
}
