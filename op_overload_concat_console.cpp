#include <iostream>
#include <cstdio>

using namespace std;

class String
{
public:
    char s[20];
    void setStr()
    {
        cin >> s;
    }
    String operator +(String S)
    {
        strcat(s, S.s);
        String s3;
        strcpy(s3.s, s);
        return s3;
    }
};
int main()
{
    String s1, s2, s3;
    cout << "Enter String 1: ";
    s1.setStr();
    cout << "Enter String 2: ";
    s2.setStr();
    s3 = s1 + s2;
    cout << "Concatenated: " << s3.s;
    return 0;
}
