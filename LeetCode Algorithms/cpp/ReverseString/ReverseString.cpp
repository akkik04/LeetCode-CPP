class Solution {
public:
    void reverseString(vector<char>& s) {
      
        // two pointers.
        int min = 0;
        int max = s.size() - 1;
      
        // temp variable for switching process.
        char temp;
        
        while(min <= max){
            
            // reversal process.
            temp = s[min];
            s[min] = s[max];
            s[max] = temp;
            
            // appropriate increment and decrement after each iteration.
            min++;
            max--;
        }
    }
};
