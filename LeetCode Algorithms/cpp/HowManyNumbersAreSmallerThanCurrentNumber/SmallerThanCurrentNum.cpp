class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        
        // creating the return vector to append the count.
        vector<int> return_vec;
        
        // counter.
        int count = 0;
        
        // iteration to find the count.
        for(int i{0}; i < nums.size(); i++){

            for(int j{0}; j < nums.size(); j++){
                
                // if condition is met, we increment the count.
                if(nums[j] < nums[i]){
                    count++;
                }
            }
            
            // appending the count at nums[i].
            return_vec.push_back(count);
          
            // re-setting the count to 0, for next iteration's algorithm.
            count = 0;
        }
    
        return return_vec;
    }
};
