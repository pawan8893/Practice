class Solution {
    int roman(char c){
        
        switch(c){
                
                case'I':
                    return 1;
                case'V':
                    return 5;
                case'X':
                    return 10;
                case'L':
                    return 50;
                case'C':
                    return 100;
                case'D':
                    return 500;
                case'M':
                    return 1000;
                default:
                    return 0;
        }
    }
public:
    int romanToInt(string s) {
        
        int ans=0;
        int i=0;
        
        while(i<s.size()){
            
            int curr=roman(s[i]);
            int next=roman(s[i+1]);
            
            if(curr < next){
                ans += -curr; 
            }
            else{
                ans += curr;   
            }
            i++;
        }
        return ans;
    }
};