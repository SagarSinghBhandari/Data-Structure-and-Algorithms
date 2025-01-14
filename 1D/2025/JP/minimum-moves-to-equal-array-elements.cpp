class Solution {
public:
    int minMoves(vector<int>& nums) {
        int m=1e9,sum = 0,n = nums.size();
        /*
        //Think on a perspective of first element and try to become equal
        //to the other elements in the array.
            sort(nums.begin(),nums.end());
            if(nums[0]==nums[n-1])return 0;
            for(int i=1;i<n;i++){
                sum+=nums[i]-nums[0];
            }
        */
       //This one-liner approach is the formulated version of 
       //the previous approach
        for(int i=0; i<n; i++){
            m = min(m,nums[i]);
            sum += nums[i];
        }
        return (sum - m*n);
    }
};