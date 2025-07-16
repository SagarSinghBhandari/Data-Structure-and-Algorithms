// LC 136: single-number
class Solution
{
public:
  int singleNumber(vector<int> &nums)
  {
    int x = 0;
    for (int i = 0; i < nums.size(); i++)
      x = x ^ nums[i];
    return x;
  }
};

/*
2nd Method:
unordered_multiset<int>set1(nums.begin(),nums.end());
int res;
for(auto x: nums)
    if(set1.count(x)<2){
        res  = x;
        break;
    }
return res;
*/