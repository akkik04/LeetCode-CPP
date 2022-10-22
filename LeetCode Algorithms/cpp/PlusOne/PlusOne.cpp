class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
      
      // creating a counter var.
      int counter = digits.size() - 1;
      
      // checking for a digit '9', where a total increment is required.
      while(counter >= 0 && digits[counter] == 9){
        // decrementing to all zeroes beforehand.
        digits[counter--] = 0;
      }
      
      // for a case of 9s.
      if (counter < 0){
        digits.insert(digits.begin(), 1);
      }
      
      // simply incrementing the last digit.
      else{
        digits[counter]++;
      }
      
      return digits;
    }
};
