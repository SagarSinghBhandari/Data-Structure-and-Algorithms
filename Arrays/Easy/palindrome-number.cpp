// LC 9: palindrome-number

class Solution
{
public:
  bool isPalindrome(int x)
  {
    string s1 = to_string(x);
    string s2 = s1;
    reverse(s1.begin(), s1.end());
    if (s1 == s2)
      return true;
    return false;
  }
};

int main()
{
  int n;
  cin >> n;
  cout << isPalindrome(n);
  return 0;
}

/*
Follow up: Could you solve it without converting the integer to a string?
class Solution {
public:
    bool isPalindrome(int x) {
        double rev = 0;
        int temp = x;
        while(temp>0){
            rev = rev*10 + temp%10;
            temp /= 10;
        }
        return (rev==x);
    }
};
*/