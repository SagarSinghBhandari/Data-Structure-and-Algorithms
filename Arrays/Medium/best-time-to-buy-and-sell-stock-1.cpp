// LC 121 best-time-to-buy-and-sell-stock-1

class Solution
{
public:
  int maxProfit(vector<int> &arr)
  {
    int mini = 1e9, n = arr.size(), res = 0;
    for (int i = 0; i < n; i++)
    {
      mini = min(mini, arr[i]);
      res = max(arr[i] - mini, res);
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
  cout << maxProfit(arr) << endl;
}