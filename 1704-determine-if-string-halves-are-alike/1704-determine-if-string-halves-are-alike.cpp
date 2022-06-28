class Solution {
    bool checkVow(char ch){
        if(ch=='a' || ch=='A' || ch=='e' || ch=='E' ||ch=='i' || ch=='I' ||ch=='o' || ch=='O' ||ch=='u' || ch=='U'){
            return true;
        }
        return false;
    }
public:
    bool halvesAreAlike(string s) {
        int n=s.length();
        
        int countA=0;
        int countB=0;
        
        for(int i=0;i<n/2;i++){
            if(checkVow(s[i])){
                countA +=1;
            }
        }
        
        for(int i=n/2;i<n;i++){
            if(checkVow(s[i])){
                countB +=1;
            }
        }
        if(countA==countB){
            return true;
        }
        return false;
        
    }
};