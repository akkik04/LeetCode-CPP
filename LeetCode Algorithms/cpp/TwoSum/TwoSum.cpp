// (#0001 TWO SUM) - LEETCODE IMPLEMENTATION

// Runtime: 16 ms, faster than 77.12% of C++ online submissions for Two Sum
// Memory Usage: 12.1 MB, less than 12.18% of C++ online submissions for Two Sum

// Time Complexity: O(N)

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        // creating our return vector.
        vector<int> return_indices;
        
        // creating map.
        unordered_map<int, int> hashmap;
        
        for (int i{0}; i < nums.size(); ++i){
            
            // upon iteration, we determine the other number to look for.
            int second_number = target - nums[i];
            
            // checking if hashmap has our other desired number.
            if (hashmap.find(second_number) != hashmap.end()){
                
                // if so, append into our return vector.
                return_indices.push_back(i);
                return_indices.push_back(hashmap[second_number]);
            }
            else{
                // if not present in hashmap, we add value to same index in map.
                hashmap[nums[i]] = i;
            }
        }
        return return_indices;
    }
};
