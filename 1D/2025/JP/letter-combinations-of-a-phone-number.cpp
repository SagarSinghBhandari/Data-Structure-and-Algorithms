//LC-17
class Solution {
public:
    vector<string> letterCombinations(string s) {
        unordered_map<int,string>mp;
        mp[2] = "abc";
        mp[3] = "def";
        mp[4] = "ghi";
        mp[5] = "jkl";
        mp[6] = "mno";
        mp[7] = "pqrs";
        mp[8] = "tuv";
        mp[9] = "wxyz";
        vector<string>res;
        string s1,s2,s3,s4;
        int n = s.size();
        switch(n){
            case 1:
            s1 = mp[s[0]-'0'];
            for(auto c: s1){
                string temp = "";
                temp += c;
                res.push_back(temp);
            }
            break;
            case 2:
            s1 = mp[s[0]-'0'], s2 = mp[s[1]-'0'];
            for(auto x: s1){
                string temp = "";
                temp += x;
                for(auto y:s2){
                    temp += y;
                    res.push_back(temp);
                    temp.pop_back();
                }
            }
            break;
            case 3:
            s1 = mp[s[0]-'0'], s2 = mp[s[1]-'0'],s3 = mp[s[2]-'0'];
            for(auto x: s1){
                string temp = "";
                temp += x;
                for(auto y:s2){
                    temp += y;
                    for(auto z: s3){
                        temp += z;
                        res.push_back(temp);
                        temp.pop_back();
                    }
                    temp.pop_back();
                }
            }
            break;
            case 4:
            s1 = mp[s[0]-'0'], s2 = mp[s[1]-'0'],s3 = mp[s[2]-'0'],s4 = mp[s[3]-'0'];
            for(auto x: s1){
                string temp = "";
                temp += x;
                for(auto y:s2){
                    temp += y;
                    for(auto z: s3){
                        temp += z;
                        for(auto c:s4){
                            temp += c;
                            res.push_back(temp);
                            temp.pop_back();
                        }
                        temp.pop_back();
                    }
                    temp.pop_back();
                }
            }
            break;
        }
        return res;
    }
};