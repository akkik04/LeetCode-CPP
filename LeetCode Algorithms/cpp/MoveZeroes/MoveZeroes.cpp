class Solution {
public:
    void moveZeroes(vector<int>& nums) {

        // creating an index to track the non-zero elements.
        int index_for_nonzeroes = 0;

        // iterating over the given numbers.
        for(int i{0}; i < nums.size(); i++){
            
            // if a non-zero element is met, we append it to the beginning of the array.
            if(nums[i] != 0){
                nums[index_for_nonzeroes] = nums[i];
                index_for_nonzeroes++;
            }
        }
        
        // append zeroes for the remaining of the array.
        for(int j = index_for_nonzeroes; j < nums.size(); j++){
            nums[j] = 0;
        }
    }
};
