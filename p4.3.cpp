#include <iostream>
#include <string>

using namespace std;

class Str
{
public:
  string s;
  Str (string n)
  {
    s = n;
  }
  Str concat(Str s1)
  {
    string ans;
    ans = s + s1.s;
    return Str(ans);
  }

  Str operator + (Str s2)
  {
    return concat(s2);
  }
};

int main()
{
  string s1, s2, s3;
  cout << "Enter the first string: ";
  cin >> s1;
  cout << "Enter the second string: ";
  cin >> s2;
  Str S1(s1);
  Str S2(s2);
  Str S3 = S1 + S2;
  cout << "Concatenated: " << S3.s << endl;

  return 0;
}
