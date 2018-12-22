#include <iostream>
#include <string>

using namespace std;

class Clock
{
public:
  int h, m, s;
  Clock(int a, int b, int c)
  {
    h = a;
    m = b;
    s = c;
  }

  Clock add(Clock c)
  {
    int H, M, S, Sadd, Madd;
    int ch = c.h;
    int cm = c.m;
    int cs = c.s;

    S = s + cs;
    M = m + cm;
    H = h + ch;

    if (S >= 60)
    {
      Sadd = S - 60;
      M += 1;
      S = Sadd;
    }

    if (M >= 60)
    {
      Madd = M - 60;
      H += 1;
      M = Madd;
    }
    return Clock(H, M, S);
  }

  Clock operator + (Clock c)
  {
    cout << "Operator Overloaded" << endl;
    return Clock(1,2,3);
  }
};

int main()
{
  int h1, m1, s1, h2, m2, s2;
  cout << "Enter HH:MM:SS of first clock separated by space: ";
  cin >> h1 >> m1 >> s1;
  cout << "Enter HH:MM:SS of second clock separated by space: ";
  cin >> h2 >> m2 >> s2;
  Clock c1(h1,m1,s1);
  Clock c2(h2,m2,s2);
//  Clock c3 = +c1(c2);
  Clock c3 = c1.add(c2);
  cout << "Addition: " << c3.h << ":" << c3.m << ":" <<c3.s << endl;
  return 0;
}
