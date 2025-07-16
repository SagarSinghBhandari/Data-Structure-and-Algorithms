#include <bits/stdc++.h>
using namespace std;

void print(vector<int> arr)
{
  for (auto x : arr)
    cout << x << " ";
  return;
}

int main()
{
  // your code goes here
  int n;
  cin >> n;
  vector<int> arr(n);
  for (int i = 0; i < n; i++)
    cin >> arr[i];

  cout << "Before Sorting: ";
  print(arr);
  cout << endl;

  for (int i = 0; i < n; i++)
  {
    int idx = i;
    for (int j = i; j < n; j++)
    {
      if (arr[j] < arr[idx])
      {
        idx = j;
      }
    }
    swap(arr[i], arr[idx]);
  }
  cout << "After Sorting: ";
  print(arr);
}
