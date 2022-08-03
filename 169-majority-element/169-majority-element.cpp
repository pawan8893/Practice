class Solution {
public:
    int majorityElement(vector<int>& nums) {
        
        
        //  TC -- > O(n), SC--> O(1)
        
        unordered_map<int,int> count;
        int n=nums.size();
        int len=n/2;
        int ans=0;
        
        for(int i=0;i<n;i++){
            count[nums[i]]++;
        }
        
        for(auto it:count){
            if(it.second>len){
                ans=it.first;
            }
        }
        return ans;
    }
};


/*

       TLE Approach -- TC--> O(n^2)+O(nlogn)
       
       int majorityElement(vector<int>& nums) {
        int n=nums.size();
        int len=n/2;
        sort(nums.begin(),nums.end());
        int count=0;
        int ans=0;
        
        for(int i=0;i<n;i++){
            count=0;
            for(int j=i;j<n;j++){
                if(nums[i]==nums[j]){
                    count++;
                }
                if(count>len){
                        ans=nums[i];
                }
            }
        }
        return ans;
    }


*/