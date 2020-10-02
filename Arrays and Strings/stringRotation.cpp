#include <iostream>
#include <string>

using namespace std;

bool isRotation(string s1, string s2)
{
  if ((s1.length() != s2.length()) or (s1.length() == 0) or (s2.length() == 0))
  {
    return false;
  }
  string concatS1 = s1 + s1;
  //cout << concatS1;
  if (0 <= concatS1.find(s2) < concatS1.length())
  {
    return true;
  }
  return false;
}

int main()
{
  string s1, s2;
  cout << "Enter string 1: ";
  cin >> s1;
  cout << "Enter string 2: ";
  cin >> s2;
  if (isRotation(s1, s2))
  {
    cout << "String 2 is rotation of String 1";
  }
  else
  {
    cout << "String 2 is not rotation of String 1";
  }
  return 0;
}
