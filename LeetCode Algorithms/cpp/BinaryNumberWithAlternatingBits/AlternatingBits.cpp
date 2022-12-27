class Solution {
public:
    bool hasAlternatingBits(int n) {
        
        // storing the previous bit in a 'temp' var.
        int temp = n&1;
        
        // right-shift to toggle next bit.
        n >>= 1; 
        
        while(n){
            // check if the new bit is the same as the prev bit.
            if((n&1) == temp){
                return false;
            }
            // re-save prev-bit to curr-bit.
            temp = n&1;
            
            // update the curr-bit.
            n >>= 1;
        }
        return true;
    }
};
