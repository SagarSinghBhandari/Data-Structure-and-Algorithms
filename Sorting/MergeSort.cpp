#include <bits/stdc++.h>
using namespace std;

void print(vector<int> arr)
{
  for (auto x : arr)
    cout << x << " ";
  return;
}

void merge(vector<int> &arr, int l, int m, int r)
{
  int n1 = m - l + 1, n2 = r - m;
  int L[n1], R[n2];
  for (int i = 0; i < n1; i++)
  {
    L[i] = arr[l + i];
  }
  for (int i = 0; i < n2; i++)
  {
    R[i] = arr[m + 1 + i];
  }
  int i = 0, j = 0, k = l;
  while (i < n1 && j < n2)
  {
    if (L[i] <= R[j])
      arr[k++] = L[i++];
    else
      arr[k++] = R[j++];
  }
  while (i < n1)
    arr[k++] = L[i++];
  while (j < n2)
    arr[k++] = R[j++];
}

void mergeSort(vector<int> &arr, int l, int r)
{
  if (l >= r)
    return;
  int mid = l + (r - l) / 2;
  mergeSort(arr, l, mid);
  mergeSort(arr, mid + 1, r);

  merge(arr, l, mid, r);
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

  mergeSort(arr, 0, n - 1);
  cout << "After Sorting: ";
  print(arr);
}
