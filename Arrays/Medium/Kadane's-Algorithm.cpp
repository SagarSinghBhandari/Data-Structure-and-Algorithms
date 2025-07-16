// LC 53: Kadane's Algorithm, maximum subarray sum
#include <bits/stdc++.h>
using namespace std;

void printKadane(vector<int> arr, int n)
{
  int sum = 0, maxi = -1e9, l = 0, r = 0;
  for (int i = 0; i < n; i++)
  {
    sum += arr[i];
    if (sum > maxi)
    {
      maxi = sum;
      r = i;
    }
    if (sum < 0)
    {
      sum = 0;
      l = i + 1;
    }
  }
  if (!sum)
  {
    for (int x : arr)
      maxi = max(maxi, x);
    cout << maxi << " ";
  }
  else
  {
    for (int i = l; i <= r; i++)
      cout << arr[i] << " ";
  }
}

int kadane(vector<int> arr)
{
  int sum = 0, res = -1e9;
  for (auto x : arr)
  {
    sum += x;
    res = max(res, sum);
    if (sum < 0)
      sum = 0;
  }
  if (!sum)
  {
    for (int x : arr)
      res = max(res, x);
  }
  return res;
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
  cout << kadane(arr) << endl;
  printKadane(arr, n);
  return 0;
}
