// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        
        // declaring our bounds for search.
        int min = 0;
        int max = n;

        while(min <= max){
            
            // midpoint of each iteration calculation.
            int mid = min + (max - min) / 2;
          
            // API CALL.
            bool isBad = isBadVersion(mid);
            
            // binary search algo.
            if(isBad == true){
                max = mid - 1;
            }
            else{
                min = mid + 1;
            }
        }
        return min;
    }
};
