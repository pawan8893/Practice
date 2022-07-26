class Solution {
public:
    bool isPowerOfThree(int n) {
        if(n<1){
            return false;
        }
        
        while(n%3==0){
            n=n/3;
        }
        
        if(n==1){
            return true;
        }
        else{
            return false;
        }
    }
};

/*

  Recursive Approach
  
      bool isPowerOfThree(int n) {
        if(n==0){
            return false;
        }
        
        return (n==1 || (n%3==0 && isPowerOfThree(n/3)));
      }

          


*/