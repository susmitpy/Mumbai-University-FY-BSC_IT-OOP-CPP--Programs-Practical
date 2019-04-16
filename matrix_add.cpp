#include <iostream>

using namespace std;

class M2;
class M1
{
public:
    int m[3][3];
    void setMat()
    {
        cout << "Matrix 1" << endl;
        cout << "Row: R  Column: C" << endl;
        for(int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                cout << "Enter R: " << i+1 << " C: " << j+1 << ": ";
                cin >> m[i][j];
            }
        }
    }
    friend void sum(M1, M2);
};
class M2
{
public:
    int m[3][3];
    void setMat()
    {
        cout << "Matrix 2" << endl;
        cout << "Row: R  Column: C" << endl;
        for(int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                cout << "Enter R: " << i+1 << " C: " << j+1 << ": ";
                cin >> m[i][j];
            }
        }
    }
    friend void sum(M1, M2);
};

void sum(M1 m1, M2 m2)
{
    for(int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << m1.m[i][j] + m2.m[i][j] << " ";
        }
        cout << "\n";
    }
}

int main()
{
    M1 m1;
    M2 m2;
    m1.setMat();
    m2.setMat();
    sum(m1,m2);
    return 0;
}
