class Solution {
public:
    bool isPalindrome(int x) {
        int num=x;
        int r;
        long long ans=0;
        
        while(num>0){
            int r=num%10;
            ans=ans*10+r;
            num=num/10;
        }
        if(ans==x){
            return true;
        }
        return false;
    }
};