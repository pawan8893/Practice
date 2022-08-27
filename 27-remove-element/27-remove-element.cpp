class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        
        int count =0;
        vector<int> temp;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]!=val)
            {
                temp.push_back(nums[i]);
                count++;
            }
        }
        nums=temp;
        return count;
        
    }
};