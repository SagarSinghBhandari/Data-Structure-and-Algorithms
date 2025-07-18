// LC 2149: rearrange-array-elements-by-sign
class Solution
{
public:
  vector<int> rearrangeArray(vector<int> &nums)
  {
    int even = 0, odd = 1, n = nums.size();
    vector<int> res(n);
    for (auto x : nums)
    {
      if (x < 0 && odd < n)
      {
        res[odd] = x;
        odd += 2;
      }
      else
      {
        res[even] = x;
        even += 2;
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
    cin >> arr[i];
  Solution obj;
  vector<int> res = obj.rearrangeArray(arr);
  return 0;
}