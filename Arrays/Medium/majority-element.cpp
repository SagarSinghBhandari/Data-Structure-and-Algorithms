// LC 169: majority-element
class Solution
{
public:
  int majorityElement(vector<int> &nums)
  {
    int ans = 0, n = nums.size();
    unordered_set<int> s1(nums.begin(), nums.end());
    unordered_multiset<int> s2(nums.begin(), nums.end());
    for (auto x : s1)
    {
      if (s2.count(x) > (n / 2))
        ans = x;
    }
    return ans;
  }
};

/*
Follow-up: Could you solve the problem in linear time and in O(1) space?
Boyer's Moore Algorithm: Since an element is always going to be in majority so a duumy variable will always hold it;
class Solution {
public:
    int majorityElement(vector<int>& nums) {
      int cnt=0,n = nums.size(),cur;
      for(int i=0; i<n; i++){
        if(cnt==0){
            cur = nums[i];
            cnt++;
        }
        else{
            if(nums[i]==cur) cnt++;
            else cnt--;
        }
      }
      return cur;
    }
};
*/