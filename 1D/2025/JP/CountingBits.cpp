
class Solution {
public:
    vector<int> countBits(int n) {
        vector<int>res;
        /*
        for(int i = 1; i<=n; i++){
            int ans = 0;
            while(i>0){
                i &= (i-1);
                ans++;
            }
            res.push_back(ans);
        }
        Tn = O(nlogn)
        */
        //here builtin fuction is used:
        for(int i=0; i<=n; i++) res.push_back( __builtin_popcount(i));
        return res;
    }
};