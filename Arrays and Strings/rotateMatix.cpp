#include <iostream>
#include <algorithm>

using namespace std;

void rotateMatrix(int a[][100], int n)
{
  //To rotate a matrix by 90 degress
  //For clock wise rotation reverse columns
  //For anti clock wise rotation reverse rows
  //Take transpose of reversed matrix

  //Reverse rows
  for (int i = 0; i < n; i++)
  {
    reverse(a[i], a[i] + n);
  }

  //Transpose matrix
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      if (i < j)
      {
        swap(a[i][j], a[j][i]);
      }
    }
  }

  //Print rotated matrix
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      cout << a[i][j] << ' ';
    }
    cout << endl;
  }
}

int main()
{
  int m[100][100];
  int n;
  cin >> n;
  cout << endl;
  int value = 1;
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      m[i][j] = value++;
      cout << m[i][j] << ' ';
    }
    cout << endl;
  }
  cout << endl;
  rotateMatrix(m, n);
  return 0;
}