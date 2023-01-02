class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {

        // leftmost and rightmost tracker.
        int min = 0;
        int max = nums.size() - 1;
        
        // binary search algo.
        while (min <= max){

            int mid = min + (max - min) / 2;

            // if we find mid, return.
            if (nums[mid] == target){
                return mid;
            }
            else if (nums[mid] > target){
                max = mid - 1;
            }
            else if (nums[mid] < target){
                min = mid + 1;
            }
        }

        // return the min, as that will point to the insert position at the end of the search.
        return min;
    }
};