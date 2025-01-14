//LC-242
class Solution {
public:
    bool isAnagram(string s, string t) {
        //Basic Approach:
        /*
            sort(s.begin(),s.end());
            sort(t.begin(),t.end());
            return s==t;
        */
        /*Improved solution using a frequency table 
          increment the frequecy for each character from s
          ,decrement it for each character from t and the 
          overeall frequecy for each must remain zero. 
        */
        vector<int> freq(26, 0);
        for(char c:s)
            freq[c-'a']++;
        for(char c : t)
            freq[c-'a']--;

        for(int num : freq) {
            if (num != 0) return false;
        }
        return true;
    }
};