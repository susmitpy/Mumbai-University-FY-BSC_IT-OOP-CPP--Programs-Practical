#include <iostream>
#include <string>
#include <cctype>

using namespace std;

class ToggleString
{
public:
  ToggleString(char s[25])
  {
    setStr(s);
  }
  char* toggle()
  {
    char str[25];
    strcpy(str, readStr());
    int l = strlen(str);
    for (int i = 0; i < l; i++)
    {
      if (islower(str[i]))
      {
        str[i] = toupper(str[i]);
      }
      else
      {
        str[i] = tolower(str[i]);
      }
    }
    return str;
  }
  char* display()
  {
    return readStr();
  }

  void operator - ()
  {
    setStr(toggle());
  }
private:
  char str[25];
  char* readStr()
  {
    return str;
  }
  void setStr(char *p)
  {
    char s[25];
    int i = 0;
    while (p[i] != '\0')
    {
      s[i] = p[i];
      i++;
    }
    strcpy(str, s);
  }
  

};

int main()
{
  char s[25];
  cout << "Enter the string to toggle case: ";
  cin >> s;
  ToggleString TS(s);
  -TS;
  cout << "After toggling: " << TS.display() << endl;
  return 0;
}
