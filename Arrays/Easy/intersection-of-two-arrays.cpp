// LC 349: intersection-of-two-arrays
// LC 189: rotate-array
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
  vector<int> intersection(vector<int> &nums1, vector<int> &nums2)
  {
    unordered_set<int> set1(nums1.begin(), nums1.end());
    unordered_set<int> set2(nums2.begin(), nums2.end());
    vector<int> a;
    for (int x : set1)
    {
      if (set2.find(x) != set2.end())
      {
        a.push_back(x);
      }
    }
    return a;
  }
};

int main()
{
  // your code goes here
  int n, m;
  cin >> n >> m;
  vector<int> arr1(n), arr2(m);
  for (int i = 0; i < n; i++)
    cin >> arr1[i];
  for (int i = 0; i < m; i++)
    cin >> arr2[i];
  Solution obj;
  vector<int> res = obj.intersection(arr1, arr2);
  for (int i = 0; i < res.size(); i++)
    cout << res[i] << " ";
  return 0;
}
