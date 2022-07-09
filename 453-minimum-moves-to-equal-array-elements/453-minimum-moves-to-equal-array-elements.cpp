class Solution {
public:
    int minMoves(vector<int>& nums) {
        
        
        /*   
            as decre   APPROACH
               
               Incrementing n-1 element by 1 will be same as  decrementing all the elements by 1 in each move until they are                    equal to the minimum element in the array.
               
                For example- [5,6,7,8] can be made equal if we decrement number 8, three times and 7, two times and 6 one times.                 Decrementing 8 by 1 is equal to adding 1 to all the other elements.
                Conclusion - We are just reversing the problem to make it simpler :)
        
        
        
        */
        
        
        
        int mini=INT_MAX;
        int moves=0;
        
        for(int i=0;i<nums.size();i++){
            mini=min(mini,nums[i]);
        }
        
        for(int i=0;i<nums.size();i++){
            moves += abs(mini-nums[i]);
        }
        return moves;
    }
};