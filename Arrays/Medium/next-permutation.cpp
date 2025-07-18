// LC 31: next-permutation

class Solution
{
public:
  void nextPermutation(vector<int> &nums)
  {
    int n = nums.size();
    int pivot_index = -1;

    // 1. Find the pivot
    // Iterate from the second-to-last element to the beginning
    for (int i = n - 2; i >= 0; i--)
    {
      if (nums[i] < nums[i + 1])
      {
        pivot_index = i;
        break;
      }
    }

    // If no pivot was found, the array is in descending order
    if (pivot_index == -1)
    {
      reverse(nums.begin(), nums.end());
      return;
    }

    // 2. Find the successor to the pivot and swap
    // Iterate from the last element to the pivot
    for (int j = n - 1; j > pivot_index; j--)
    {
      if (nums[j] > nums[pivot_index])
      {
        swap(nums[pivot_index], nums[j]);
        break;
      }
    }

    // 3. Reverse the suffix (the part of the array after the pivot)
    reverse(nums.begin() + pivot_index + 1, nums.end());
  }
};