class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int sum=0;
        
        int sumOfArrayElements=0;
        
        for(int i=0;i<nums.size();i++){
            sumOfArrayElements +=nums[i];
            sum +=(i+1);
        }
        return sum-sumOfArrayElements;
    }
};