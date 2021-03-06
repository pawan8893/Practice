class Solution {
public:
    int minMoves2(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        
        int cnt=0;
        
        
        for(int i=0;i<n/2;i++){
            cnt += abs(nums[i]-nums[n-i-1]);
        }
        return cnt;
    }
};

/*
    Approach 1
    
     int minMoves2(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        
        int cnt=0;
        
        int median =nums[n/2];
        
        for(int i=0;i<n;i++){
            cnt += abs(nums[i]-median);
        }
        return cnt;
    }












*/