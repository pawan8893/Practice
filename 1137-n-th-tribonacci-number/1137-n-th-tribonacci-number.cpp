class Solution {
    int solve(int n,vector<int> &dp){
        if(n==0){
            return 0;
        }
        if(n<=2){
            return 1;
        }
        
        if(dp[n]!=-1){
            return dp[n];
        }
        
        dp[n]=solve(n-1,dp)+solve(n-2,dp)+solve(n-3,dp);
        return dp[n];
    }
public:
    int tribonacci(int n) {
        vector<int> dp(n+1,-1);
        return solve(n,dp);
    }
};