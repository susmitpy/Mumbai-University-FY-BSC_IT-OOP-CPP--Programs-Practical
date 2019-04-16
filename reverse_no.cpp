#include <iostream>

using namespace std;

class Num
{
public:
    int n;
    int rev = 0;
    int rem;
    void setNum()
    {
        cout << "Enter the number: ";
        cin >> n;
    }
    void revNum()
    {
        while(n > 0)
        {
            rem = n % 10;
            rev = (rev * 10) + rem;
            n /= 10;
        }
        n = rev;
        rev = 0;
    }
    void getNum()
    {
        cout << "Number: " << n << endl;
    }
};

int main()
{
    Num n;
    n.setNum();
    n.revNum();
    n.getNum();
    return 0;
}
