class Solution{
public:
  
  int findNumbers(vector<int>& nums){
    
    // tracking the count of numbers with even amount of digits.
    int even_dig_count{0};
    
    // iterating over the list of given numbers.
    for(int i{0}; i < nums.size(); i++){
      
      // checking the parity of the count of digits with the external function.
      int curr_num = nums[i];
      if(isEvenDigits(curr_num) == true){
        even_dig_count++;
      }
    }
    
    // returning the even digit count;
    return even_dig_count;
  }
  
  // external function to be applied to each number to check parity of the count of digits.
  bool isEvenDigits(int n){
    
    int temp = n;
    int count{0};
    
    // algorithm to filter out each digit.
    while(temp != 0){
      
      temp /= 10;
      count++;
    }
    
    // checking if the count of filtered digits is even.
    if(count % 2 == 0){
      return true; 
    }
    else{
      return false; 
    }
  }
};
