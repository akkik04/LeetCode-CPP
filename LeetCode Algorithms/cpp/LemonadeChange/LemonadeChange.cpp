class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {

        // declaring var's to store our change/money in terms of bills.
        int five_bills = 0;
        int ten_bills = 0;

        // iterate over the given array.
        for(int i = 0; i < bills.size(); i++){

            // if we meet a '5' bill, increment its counter with no deduction, as no change back is required.
            if(bills[i] == 5){
                five_bills++;
            }

            // if we meet a '10' bill, check if we have a '5' bill for change, and then proceed to increment/decrement from there.
            else if (bills[i] == 10){
                if(five_bills == 0){
                    return false;
                }
                ten_bills++;
                five_bills--;
            }

            // if we meet a '20' bill, check if we can pay out with fives and tens.
            // or check if we can give direct change of '$15'.
            // if nothing is possible, return false.
            else{

                if(five_bills > 0 && ten_bills > 0){
                    five_bills--;
                    ten_bills--;
                }
                else if (five_bills >= 3){
                    five_bills -= 3;
                }
                else{
                    return false;
                }
            }
        }

        // return true.
        return true;
    }
};