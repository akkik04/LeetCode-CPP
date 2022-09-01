// (#0027 REMOVE ELEMENT) - LEETCODE IMPLEMENTATION

// Runtime: 0 ms, faster than 100.00% of C++ online submissions for Remove Element.
// Memory Usage: 8.7 MB, less than 73.02% of C++ online submissions for Remove Element.

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        
        // var's for counter, and right-most pointer.
        int i{0};
        int length = nums.size();
        
        while (i < length){
            // checking if element is undesired.
            if (nums[i] == val){
                // cutting out undesired element.
                nums[i] = nums[length - 1];
                length--;
            }
            else{
                // if desired, we simply move on to next iteration.
                i++;
            }
        }
        return length;
    }
};
