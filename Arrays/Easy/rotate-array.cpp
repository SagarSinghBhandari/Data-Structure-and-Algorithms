// LC 189: rotate-array
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
  void rotateLeft(vector<int> &nums, int k)
  {
    int n = nums.size();
    k = k % n;
    reverse(nums.begin(), nums.begin() + n - k);
    reverse(nums.end() - k, nums.end());
    reverse(nums.begin(), nums.end());
  }
  void rotateRight(vector<int> &nums, int k)
  {
    int n = nums.size();
    k = k % n;
    reverse(nums.begin(), nums.begin() + k);
    reverse(nums.end() + k, nums.end());
    reverse(nums.begin(), nums.end());
  }
};

int main()
{
  // your code goes here
  int n, k;
  cin >> n >> k;
  vector<int> arr(n);
  for (int i = 0; i < n; i++)
    cin >> arr[i];
  Solution obj;
  obj.rotateLeft(arr, k);
  cout << "Left Rotated: ";
  for (int i = 0; i < n; i++)
    cout << arr[i] << " ";
  obj.rotateRight(arr, k);
  cout << "\nRight Rotated: ";
  for (int i = 0; i < n; i++)
    cout << arr[i] << " ";
  return 0;
}
