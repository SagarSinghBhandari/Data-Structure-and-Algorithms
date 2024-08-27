/*
There is a frog on the '1st' step of an 'N' stairs long staircase. 
The frog wants to reach the 'Nth' stair. 
'HEIGHT[i]' is the height of the '(i+1)th' stair.
If Frog jumps from 'ith' to 'jth' stair, the energy lost in the jump is given by absolute value of ( HEIGHT[i-1] - HEIGHT[j-1] ). 
If the Frog is on 'ith' staircase, he can jump either to '(i+1)th' stair or to '(i+2)th' stair. 
Your task is to find the minimum total energy used by the frog to reach from '1st' stair to 'Nth' stair.
*/
#include <bits/stdc++.h> 
int helper(int i, vector<int>arr,vector<int>&dp){
    if(i==0)
        return 0;
    if(i<0)
        return 1e9;
    if(dp[i]!=-1)
        return dp[i];
    int l=INT_MAX , r = INT_MAX;
    l = abs(arr[i]-arr[i-1]) + helper(i-1,arr,dp);
    if(i>1)
        r = abs(arr[i]-arr[i-2]) + helper(i-2, arr,dp);
    return dp[i] = min(l,r);
}
int frogJump(int n, vector<int> &heights)
{   
    vector<int>dp(n,-1);
    // Write your code here.
    return helper(n-1,heights,dp);
}

