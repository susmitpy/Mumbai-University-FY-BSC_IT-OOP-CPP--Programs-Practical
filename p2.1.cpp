#include <iostream>
#include <string>

using namespace std;

struct C
{
  int real;
  int imag;
};

class Complex
{
public:
  Complex(int a, int b)
  {
    real = a;
    imag = b;
  }
  friend struct C add(Complex, Complex);
private:
  int real, imag;
};

struct C add(Complex c1, Complex c2)
{
  int r, c;
  r = c1.real + c2.real;
  c = c1.imag + c2.imag;
  struct C ans;
  ans.real = r;
  ans.imag = c;
  return ans;
}

int main()
{
  Complex c1(5,3), c2(5,3);
  cout << add(c1,c2).real << endl;
  cout << add(c1,c2).imag << endl;
  return 0;
}
