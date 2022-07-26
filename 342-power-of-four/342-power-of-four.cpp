class Solution {
public:
    bool isPowerOfFour(int n) {
        if(n==0){
            return false;
        }
        
        return (n==1 || (n%4==0 && isPowerOfFour(n/4)));
        
    }
};


/*

   Loop Approach
   
   bool isPowerOfFour(int n) {
        if(n<1){
            return false;
        }
        
        while(n%4==0){
            n/=4;
        }
        if(n==1){
            return true;
        }
        else{
            return false;
        }
    }


*/