class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int count=0;
        int n=nums.size();
        vector<int> temp;
        int element=INT_MIN;
        
        for(int i=0;i<n;i++){
            if(element != nums[i]){
                temp.push_back(nums[i]);
                element=nums[i];
                count++;
            }
        }
        nums=temp;
        return count;
    }
};