#include <bits/stdc++.h>
using namespace std;

void print(vector<int> arr)
{
  for (auto x : arr)
    cout << x << " ";
  return;
}

int partition(int low, int high, vector<int> &arr)
{
  int piv = high; // taking pivot as last element as default
  if (high > 0)
    piv = low + rand() % (high - low + 1);
  int j = low, i = low - 1;
  while (j < high)
  {
    if (arr[j] < arr[piv])
    {
      i++;
      swap(arr[i], arr[j]);
    }
    j++;
  }
  swap(arr[i + 1], arr[piv]);
  return i + 1;
}

void quickSort(vector<int> &arr, int low, int high)
{
  if (low <= high)
  {
    int pIdx = partition(low, high, arr);
    quickSort(arr, low, pIdx - 1);
    quickSort(arr, pIdx + 1, high);
  }
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

  quickSort(arr, 0, n - 1);
  cout << "After Sorting: ";
  print(arr);
}
