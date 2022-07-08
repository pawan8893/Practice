class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        
        unordered_map<int,int> mpp;
        int val=0;
        
        for(auto i=0;i<nums.size();i++){
            mpp[nums[i]] +=1 ;
        }
        
        for(auto it:mpp){
            if(it.second >1){
                val=it.first;
                break;
            }
        }
        return val;
    }
};


/*  


int findDuplicate(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        
        int val;
        
        for(int i=0;i<nums.size();i++){
            if(nums[i]==nums[i+1]){
                val=nums[i];
                break;
            }
        }
        return val;
    }




*/