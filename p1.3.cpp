#include <iostream>
#include <string>
#include <cmath>

using namespace std;

class Demo
{
public:
  Demo(int num)
  {
    n = num;
  }
  int factorial()
  {
    int i, fac = 1;
    int n = readNo();
    for (i = 1; i < n + 1; i++)
    {
      fac *= i;
    }
    return fac;
  }
  int reverseNo()
  {
    int rem , rev = 0;
    int n = readNo();
    while (n > 0)
    {
      rem = n % 10;
      rev = (rev*10) + rem;
      n /= 10;
    }
    return rev;
  }
  string isPalindrome()
  {
    int n = readNo();
    int rev = reverseNo();
    if (n == rev)
    {
      return "True";
    }
    return "False";
  }

  string isArmStrong()
  {
    int i, rem, tot = 0, org;
    int n = readNo();
    org = n;
    while (n != 0)
    {
      rem = n % 10;
      tot += pow(rem, 3);
      n /= 10;
    }
    if (org == tot)
    {
      return "True";
    }
    return "False";
  }
private:
  int n;
  int readNo()
  {
    return n;
  }
};

int main()
{
  Demo d(153), d1(232), d2(4);
  cout << "153:\n\tArmstrong: " << d.isArmStrong() << "\n\tReverse: " << d.reverseNo() << endl;
  cout << "232: Palindrome: " << d1.isPalindrome() << endl;
  cout << "4!: " << d2.factorial() << endl;
  return 0;
}
