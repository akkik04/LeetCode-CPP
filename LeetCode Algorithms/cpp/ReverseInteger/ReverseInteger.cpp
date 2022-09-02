// (#0007 REVERSE INTEGER) - LEETCODE IMPLEMENTATION

// Runtime: 0 ms, faster than 100.00% of C++ online submissions for Reverse Integer. 
// Memory Usage: 5.8 MB, less than 75.99% of C++ online submissions for Reverse Integer.

class Solution {
public:
    int reverse(int x) {
        
        // creating a var to store the reversed integer.
        int res{0};
        
        while(x){
            // validating if reversed version is out of signed 32-bit int range.
            if(res > INT_MAX/10 || res < INT_MIN/10){
                // if so, return 0;
                return 0;
            }
            else{
                // else, continue reversal process.
                res = (res * 10) + (x % 10);
                x /= 10;
            }
        }
        return res;
    }
};
