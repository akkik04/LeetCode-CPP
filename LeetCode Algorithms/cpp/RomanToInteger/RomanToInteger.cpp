// (#0013 ROMAN TO INTEGER) - LEETCODE IMPLEMENTATION

// Runtime: 15 ms, faster than 66.53% of C++ online submissions for Roman to Integer.
// Memory Usage: 7.7 MB, less than 58.79% of C++ online submissions for Roman to Integer.

class Solution {
public:
    int romanToInt(string s) {
      
        // creating our corresponding roman numerals map.
        unordered_map<char, int> vals{
            {'I', 1}, 
            {'V', 5}, 
            {'X', 10}, 
            {'L', 50}, 
            {'C', 100}, 
            {'D', 500}, 
            {'M', 1000}};
        
        // var's for result, and counter.
        int res{0};
        int i{0};
        
        // base case.
        if (s.length() == 1){
            return vals[s[0]];
        }
        
        while(i <= s.length() - 2){
            // checking for larger numeral in front of pair.
            if(vals[s[i]] >= vals[s[i + 1]]){
                res += vals[s[i]];
                i++;
            }
            else{
                // checking for larger numeral at end of pair.
                res += vals[s[i + 1]] - vals[s[i]];
                i += 2;
            }
        }
        
        // if landing on last index, add its val too.
        if (i == s.length() - 1){
            res += vals[s[i]];
        }
        return res;
    }
};
