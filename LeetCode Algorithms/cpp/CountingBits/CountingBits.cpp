class Solution {
public:
    vector<int> countBits(int n) {
      
        // creating a return vector.
        vector<int> nums;
        
        // iteration process from 0 <= i <= n.
        for(int i{0}; i <= n; i++){     
            
            // creating a function to apply the bitwise operations.
            int res = countOnes(i);
            nums.push_back(res);
        }
  
        return nums;
    }
    
    // function to perform the bitwise operation on selected 'i'.
    int countOnes(int x){
      
        // tracker var for 1-bits.
        int count = 0;

        while(x){
            
            // checking if bit is 1.
          
            /**BACKGROUND KNOWLEDGE: IF x-bit and y-bit are used as two operands for a bitwise AND operation:
                - Return is 1, if: both bits are 1.
                - Return is 0, if: both bits aren't 1.
            **/
            if(x&1 == 1){
                count++;
            }
            
            // auto-assignment for bitwise right shift by 1, to examine next bit.
            x >>= 1;
        }
        return count;
    }
};
