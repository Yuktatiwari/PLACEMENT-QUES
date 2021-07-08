//Rotating Matrix k times.
#include <iostream>
using namespace std;
int main()
{
  int m, n;
  cout << "Enter the no. of columns and rows: ";
  cin >> m >> n;
  int arr[m][n];
  cout << "Enter the elements of array: ";
  for (int i = 0; i < m; i++)
  {
    for (int j = 0; j < n; j++)
    {
      cin >> arr[i][j];
    }
  }
  int k;
  cin >> k;
  while (k--)
  {
    int t = arr[m - 1][n - 1];
    for (int i = m - 1; i >= 0; i--)
    {
      for (int j = n - 1; j >= 0; j--)
      {
        arr[i][j] = arr[i][j - 1];
      }
    }
    arr[0][0] = t;
  }
  for (int i = 0; i < m; i++)
  {
    for (int j = 0; j < n; j++)
    {
      cout << arr[i][j] << " ";
    }
    cout << endl;
  }
}
