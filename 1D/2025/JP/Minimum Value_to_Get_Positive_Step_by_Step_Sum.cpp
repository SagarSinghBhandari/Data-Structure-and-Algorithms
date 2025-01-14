//LC-1413
class Solution {
public:
    int minStartValue(vector<int>& nums) {
    //Basic approach to find maximum negative number that can occur    
        int ans = 101,cur = 0;
        for(int i=0; i<nums.size(); i++){
            cur += nums[i];
            ans = min(ans,cur);
        }
        return (ans>0)?1:abs(ans)+1; //if sum is already +ve then 1 
    }
};