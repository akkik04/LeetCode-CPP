class Solution {
public:
    bool judgeSquareSum(int c) {

        /*
        we can perform a binary search algorithm to solve this problem.

        we can choose our range to be from 0 to sqrt(c), as we know that any value with the
        sum of these squares will be between this range.

        create a midpoint, of (min * min) + (max * max), and check its equality to c.
        based on the result increment or decrement the appropriate pointer.
        */

        unsigned int min = 0;
        unsigned int max = sqrt(c);

        while(min <= max){

            unsigned int mid = (min * min) + (max * max);

            if(mid == c){
                return true;
            }
            else if(mid > c){
                max--;    
            }
            else if(mid < c){
                min++;
            }
        }

        return false;
    }
};
