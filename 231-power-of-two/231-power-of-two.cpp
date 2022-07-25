class Solution {
    
public:
    bool isPowerOfTwo(int n) {
       
        if(n==0){
            return false;
        }
        
        return (n==1 ||(n%2==0 && isPowerOfTwo(n/2)));
    }
};

/*
   Approach 1
   
   for(int i=0;i<=30;i++)
        {
           int ans=pow(2,i);
           if(ans==n)
           {
               return true;
           }
        }
        return false;


*/