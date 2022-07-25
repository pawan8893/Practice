class Solution {
    int firstOccurrence(vector<int>& nums, int target){
        int s=0;
        int e=nums.size()-1;
        
        int res=-1;
        
        while(s<=e){
            int mid= s+(e-s)/2;
            
            if(nums[mid]==target){
                res=mid;
                e=mid-1;
            }
            else if(nums[mid]<target){
                s=mid+1;
            }
            else{
                e=mid-1;
            }
        }
        return res;
    }
    
    int lastOccurrence(vector<int>& nums, int target){
        int s=0;
        int e=nums.size()-1;
        
        int res=-1;
        
        while(s<=e){
            int mid= s+(e-s)/2;
            
            if(nums[mid]==target){
                res=mid;
                s=mid+1;
            }
            else if(nums[mid]<target){
                s=mid+1;
            }
            else{
                e=mid-1;
            }
        }
        return res;
    }
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> ans;
        
        ans.push_back(firstOccurrence(nums,target));
        ans.push_back(lastOccurrence(nums,target));
        
        return ans;
    }
};