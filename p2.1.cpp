#include <iostream>
#include <string>

using namespace std;

class Complex
{
public:
  Complex(int a, int b)
  {
    real = a;
    imag = b;
  }
  friend Complex add(Complex, Complex);

  int real;
  int imag;
};

Complex add(Complex a, Complex b)
{

  return Complex(a.real + b.real, a.imag + b.imag);
}

int main()
{
  int c1r, c1i, c2r, c2i;
  cout << "Enter real and imag of c1 and c2 each on a new line" << endl;
  cin >> c1r;
  cin >> c1i;
  cin >> c2r;
  cin >> c2i;
  Complex c1(c1r, c1i);
  Complex c2(c2r, c2i);
  cout << "c1: " << c1.real << " " << c1.imag << endl;
  cout << "c2: " << c2.real << " " << c2.imag << endl;
  Complex c3 = add(c1,c2);
  cout << "Added:\n" << "\tReal: " << c3.real << "\n\t" << "Imag: " << c3.imag << endl;
  return 0;
}
