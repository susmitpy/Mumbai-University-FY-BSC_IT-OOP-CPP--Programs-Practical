#include <iostream>

using namespace std;

class StaticDemo
{
public:
    static int c;
    StaticDemo()
    {
        c += 1;
    }
    static void count()
    {
        cout << "No. of objects: " << c << endl;
    }
};

int StaticDemo::c =0;

int main()
{
    StaticDemo s1, s2;
    StaticDemo::count();
    StaticDemo s3, s4;
    s3.count();
    return 0;
}
