class Solution {
public:
    bool isPalindrome(int x) {
        auto y = to_string(x);
        int len = y.length();
        for(int i =0;i<len/2;i++){
            if(y[i]!=y[len-i-1])
                return false;
        }
        return true;
    }
};