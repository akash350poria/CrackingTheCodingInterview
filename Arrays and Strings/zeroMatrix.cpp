#include <iostream>
#include <algorithm>
using namespace std;

/*void setMatrixZero(int a[][100], int m, int n)
{
  //cout << "FUNCTION CALLED";
  bool rowZero[m] = {false};
  bool colZero[n] = {false};
  //find position of zeros
  for (int i = 0; i < m; i++)
  {
    for (int j = 0; j < n; j++)
    {
      if (a[i][j] == 0)
      {
        rowZero[i] = true;
        colZero[j] = true;
      }
    }
  }
  //Set row zero
  for (int i = 0; i < m; i++)
  {
    if (rowZero[i])
    {
      for (int j = 0; j < n; j++)
      {
        a[i][j] = 0;
      }
    }
  }

  //Set column zero
  for (int j = 0; j < n; j++)
  {
    if (colZero[j])
    {
      for (int i = 0; j < m; i++)
      {
        a[i][j] = 0;
      }
    }
  }

  //Print zero matrix
  cout << "Zero matrix is: " << endl;
  for (int i = 0; i < m; i++)
  {
    for (int j = 0; j < n; j++)
    {
      cout << a[i][j] << " ";
    }
    cout << endl;
  }
}*/

void zeroMatrix(int a[100][100], int m, int n)
{
  pair<int, int> flags[m + n] = make_pair(-1, -1);
  int flagCounter = 0;
  for (int i = 0; i < m; i++)
  {
    for (int j = 0; j < n; j++)
    {
      if (a[i][j] == 0)
      {
        flags[flagCounter].first = i;
        flags[flagCounter].second = j;
        flagCounter++;
      }
    }
  }
  int counter = 0;
  while (counter <= flagCounter)
  {
    for (int j = 0; j < n; j++)
    {
      a[flags[counter].first][j] = 0;
    }
    for (int i = 0; i < m; i++)
    {
      a[i][flags[counter].second] = 0;
    }
    counter++;
  }
  cout << "Zero matrix is: " << endl;
  for (int i = 0; i < m; i++)
  {
    for (int j = 0; j < n; j++)
    {
      cout << a[i][j] << " ";
    }
    cout << endl;
  }
}

int main()
{
  int m, n;
  int a[100][100];
  cout << "Enter rows and columns: ";
  cin >> m >> n;
  cout << "Enter elements: ";
  for (int i = 0; i < m; i++)
  {
    for (int j = 0; j < n; j++)
    {
      cin >> a[i][j];
    }
  }
  cout << "Matrix is: " << endl;
  for (int i = 0; i < m; i++)
  {
    for (int j = 0; j < n; j++)
    {
      cout << a[i][j] << " ";
    }
    cout << endl;
  }
  zeroMatrix(a, m, n);
  //setMatrixZero(a, m, n);
  return 0;
}