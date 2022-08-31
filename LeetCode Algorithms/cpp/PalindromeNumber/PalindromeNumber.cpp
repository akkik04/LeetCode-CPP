// (#0009 PALINDROME NUMBER) - LEETCODE IMPLEMENTATION

// Runtime: 15 ms, faster than 81.43% of C++ online submissions for Palindrome Number.
// Memory Usage: 5.8 MB, less than 74.38% of C++ online submissions for Palindrome Number.

class Solution {
public:
    bool isPalindrome(int x) {
        
        // variables for reversal.
        int temp{x};
        size_t reversed_number{0};
        
        // counter.
        int i{0};
        
        // edge-cases.
        if (temp < 0){
            return false;
        }
        else if(temp >= 0 && temp <= 9){
            return true;
        }
        else{
            // filtering out digits.
            while (temp != 0){
                // digit filtration, and addition to reversed version.
                int dig = temp % 10;
                reversed_number = reversed_number * 10 + dig;
                temp/= 10;
                i++;
            }
        }
        return reversed_number == x;
    }
};
