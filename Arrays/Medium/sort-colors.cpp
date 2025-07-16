// LC 75: sort-colors
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
  void sortColors(vector<int> &nums)
  {
    int low = 0, high = nums.size() - 1, mid = 0;
    while (mid <= high)
    {
      if (nums[mid] == 0)
        swap(nums[low++], nums[mid++]);
      else if (nums[mid] == 1)
        mid++;
      else
        swap(nums[mid], nums[high--]);
    }
    return;
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
  obj.sortColors(arr);
  for (int i = 0; i < n; i++)
    cout << arr[i] << " ";
  return 0;
}
