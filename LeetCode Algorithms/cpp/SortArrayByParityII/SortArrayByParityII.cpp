class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {

        // vectors for appending.
        vector<int> even;
        vector<int> odd;
        vector<int> ans;

        // counter var's.
        int j = 0;
        int k = 0;

        // appending even and odd elements into respective vectors.
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] % 2 == 0){
                even.push_back(nums[i]);
            }
            else{
                odd.push_back(nums[i]);
            }
        }

        // pushing the appropriate vector's element based on the parity of the index.
        for(int i = 0; i < nums.size(); i++){

            if(i % 2 == 0){
                ans.push_back(even[j++]);
            }
            else{
                ans.push_back(odd[k++]);
            }
        }

        return ans;
    }
};