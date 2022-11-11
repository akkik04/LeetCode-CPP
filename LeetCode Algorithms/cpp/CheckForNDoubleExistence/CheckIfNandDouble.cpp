class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        
        // iterating once.
        for(int i{0}; i < arr.size(); i++){
            
            // iterating twice.
            for(int j{0}; j < arr.size(); j++){
                
                // checking the values of these two loops, and if the condition is met.
                if ((i != j) && (arr[i] == 2 * arr[j])){
                    return true;
                }
            }
        }
        return false;
    }
};
