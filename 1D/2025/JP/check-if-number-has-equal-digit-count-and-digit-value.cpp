//LC-2283
class Solution {
public:
    bool digitCount(string num) {
        for(int i=0; i<num.size(); i++){
            int cnt = 0;
            for(int j=0; j<num.size(); j++){
                if(num[j]==(i+'0')) cnt++;
            }
            if((cnt+'0') != num[i]) return false;
        }
        return true;
    }
};