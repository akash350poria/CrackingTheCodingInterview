//STRING COMPRESSION
#include <iostream>
#include <string>
#include <sstream>
using namespace std;

string stringCompression(string str)
{
  /*if (str.length() == 1)
  {
    return str + '1';
  }*/
  int counter = 1;
  stringstream result;
  for (int i = 0; i < str.length(); i++)
  {
    if (str[i] == str[i + 1])
    {
      counter++;
    }
    else
    {
      result << (str[i]);
      result << counter;
      counter = 1;
    }
  }
  if (result.str().length() > str.length())
  {
    return str;
  }
  return result.str();
}

int main()
{
  string s, result;
  cin >> s;
  result = stringCompression(s);
  cout << result;
  return 0;
}