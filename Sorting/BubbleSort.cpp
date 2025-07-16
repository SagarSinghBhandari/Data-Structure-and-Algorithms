#include <bits/stdc++.h>
using namespace std;

void print(vector<int> arr)
{
  for (auto x : arr)
    cout << x << " ";
  return;
}

void bubbleSort(vector<int> &arr, int n)
{
  if (n == 1)
    return;
  for (int j = 0; j < n; j++)
  {
    if (arr[j] > arr[j + 1])
      swap(arr[j], arr[j + 1]);
  }
  bubbleSort(arr, n - 1);
}

int main()
{
  // your code goes here
  int n;
  cin >> n;
  vector<int> arr(n);
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }
  cout << "Before Sorting: ";
  print(arr);
  cout << endl;

  bubbleSort(arr, n - 1);
  cout << "After Sorting: ";
  print(arr);
}
