// TUF :leaders-in-an-array (https://takeuforward.org/data-structure/leaders-in-an-array/)
/*
Problem Statement: Given an array, print all the elements which are leaders. A Leader is an element that is greater than all of the elements on its right side in the array.
*/

#include <bits/stdc++.h>
using namespace std;

vector<int> getLeaders(vector<int> arr, int n)
{
  int cur = arr[n - 1];
  vector<int> res;
  res.push_back(cur);
  for (int i = n - 2; i >= 0; i--)
  {
    if (arr[i] > cur)
    {
      res.push_back(arr[i]);
      cur = arr[i];
    }
  }
  // Reverse the result to get leaders in their original order
  reverse(res.begin(), res.end());
  return res;
}
int main()
{
  int n;
  cin >> n;
  vector<int> arr(n);
  for (int i = 0; i < n; i++)
    cin >> arr[i];
  vector<int> res = getLeaders(arr, n);
  for (auto x : res)
    cout << x << " ";
  return 0;
}
