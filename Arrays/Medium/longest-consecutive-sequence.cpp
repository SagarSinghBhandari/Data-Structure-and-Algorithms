// LC 128: longest-consecutive-sequence

class Solution
{
public:
  int longestConsecutive(vector<int> &nums)
  {
    unordered_set<int> set(nums.begin(), nums.end());
    int res = 0;
    for (int x : set)
    {
      if (set.find(x - 1) == set.end())
      {
        int curx = x;
        int cur = 1;
        while (set.find(curx + 1) != set.end())
        {
          curx++;
          cur++;
        }
        res = max(res, cur);
      }
    }
    return res;
  }
};

int main()
{
  int n;
  cin >> n;
  vector<int> arr(n);
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }
  Solution obj;
  int res = obj.longestConsecutive(arr);
  cout << res << endl;
}