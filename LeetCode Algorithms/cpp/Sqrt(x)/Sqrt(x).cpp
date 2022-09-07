// (#0069 SQRT(X)) - LEETCODE IMPLEMENTATION

// Runtime: 0 ms, faster than 100.00% of C++ online submissions for Sqrt(x). 
// Memory Usage: 5.9 MB, less than 73.85% of C++ online submissions for Sqrt(x).

class Solution {
public:
    int mySqrt(int x) {
        
        // declaring the left and right pointers.
        long min{0};
        long max{x};
      
        // declaring result storage
        long res{0};
        
        while (min <= max){
          
            // finding the middle.
            long mid = min + (max - min) / 2;
            
            // checking if left-pointer has to be moved forward.
            // tying res to the middle index.
            if (mid * mid <= x){
                res = mid;
                min = mid + 1;
            }
            else{
                // checking if right-pointer has to be moved backwards.
                max = mid - 1;
            }
        }
        // returning a casted (truncated decimal version) variable to int.
        return static_cast<int>(res);
    }
};
