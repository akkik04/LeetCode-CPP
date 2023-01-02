class Solution {
public:
    bool detectCapitalUse(string word) {
        
        // declaring a tracker to count the number of capital letters.
        int num_capitals = 0;
        
        // counting the number of capital letters in the word.
        for(char c: word){
            if(isupper(c)){
                num_capitals++;
            }
        }
        
        // returning based on the cases provided.
        return (num_capitals == 0 || (num_capitals == 1 && isupper(word.at(0))) || num_capitals == word.size());
    }
};
