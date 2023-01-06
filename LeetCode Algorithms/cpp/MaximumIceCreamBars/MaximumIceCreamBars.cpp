class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {

        // sort the vector, so that we can start choosing least-expensive items from the start to maximize total.
        sort(costs.begin(), costs.end());

        // track the number of bars.
        int num_bars = 0;
        
        // iterate over the possible bars.
        for(int i = 0; i < costs.size(); i++){
            
            // if we go broke, return however many bars we can afford.
            if(coins < costs[i]){
                return num_bars;
            }

            // if we have money, continue spending, and incrementing bars.
            else{
                coins -= costs[i];
                num_bars++;
            }
        }

        // returning total bars possible.
        return num_bars;    
    }
};