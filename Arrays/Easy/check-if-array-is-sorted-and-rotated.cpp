// LC 1752 :
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
  bool check(vector<int> &nums)
  {
    int cnt = 0, n = nums.size();
    for (int i = 1; i < n; i++)
    {
      if (nums[i] < nums[i - 1])
        cnt++;
    }
    if (nums[n - 1] > nums[0])
      cnt++;
    return (cnt <= 1);
  }
};

int main()
{
  // your code goes here
  int n;
  cin >> n;
  vector<int> arr(n);
  for (int i = 0; i < n; i++)
    cin >> arr[i];
  Solution obj;
  string res = (obj.check(arr) == 1) ? "True" : "false";
  cout << res;
  return 0;
}
