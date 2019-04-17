#include <iostream>

using namespace std;

class String
{
public:
   char s[20], s1[20], con[40], rev[20], conf[20];
   int len,lenf,cmpf=1,cmp = 0;
   void setStr1()
   {
       cout << "Enter String 1: ";
       cin >> s;
   }
   void setStr2()
   {
       cout << "Enter String 2: ";
       cin >> s1;
   }
   void findLen()
   {
      int l = 0, i = 0;
      while(s[i] != '\0')
      {
          l++;
          i++;
      }
      len = l;
   }
   void concat()
   {
      int i = 0;
      while(s[i] != '\0')
      {
          con[i] = s[i];
          i++;
      }

      int j = 0;
      while (s1[j] != '\0')
      {
          con[i] = s1[j];
          i++;
          j++;
      }
   }
   void reverse()
   {
      int l = len - 1;
      int i = 0;
      while (l != -1)
      {
          rev[i] = s[l];
          l--;
          i++;
      }

   }
   void compare()
   {
      int i = 0;
      while (s[i] != '\0')
      {
          if (s[i] != s1[i])
          {
              cmp = 1;
              break;
          }
          i++;
      }
   }

   void lengthUsingFunction()
   {
       lenf = strlen(s);
   }
   void comparisonUsingFunction()
   {
       cmpf = strcmp(s,s1);
   }
   void concatusingFunction()
   {
       strcpy(conf,s);
       strcat(conf,s1);
   }
   void performOperations()
   {
       findLen();
       concat();
       reverse();
       lengthUsingFunction();
       compare();
       comparisonUsingFunction();
       concatusingFunction();
   }
   void getResults()
   {
       cout << "Length of str1: " << len << endl;
       cout << "Length Using Function: " << lenf << endl;
       cout << "Concatenated: " << con << endl;
       cout << "Concatenated using function: " << conf << endl;
       cout << "Reverse of str1: " << rev << endl;
       cout << "Comparison: " << (cmp==0 ? "Same" : "Not Same") << endl;
       cout << "Comparison using function: " << (cmpf==0 ? "Same" : "Not Same") << endl;

    }
};

int main()
{
    String s;
    s.setStr1();
    s.setStr2();
    s.performOperations();
    s.getResults();
    return 0;
}
