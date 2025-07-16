// LC 1: two-sum
// LC 189: rotate-array
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
  vector<int> twoSum(vector<int> &nums, int target)
  {
    unordered_map<int, int> mp;
    int n = nums.size();
    for (int i = 0; i < n; i++)
    {
      int cmp = target - nums[i];
      auto it = mp.find(cmp);
      if (it != mp.end() && it->second != i)
        return {i, it->second};
      mp[nums[i]] = i;
    }
    return {-1, -1};
  }
};

int main()
{
  // your code goes here
  int n, t;
  cin >> n >> t;
  vector<int> arr(n);
  for (int i = 0; i < n; i++)
    cin >> arr[i];
  Solution obj;
  vector<int> res = obj.twoSum(arr, t);
  for (int i = 0; i < res.size(); i++)
    cout << res[i] << " ";
  return 0;
}
