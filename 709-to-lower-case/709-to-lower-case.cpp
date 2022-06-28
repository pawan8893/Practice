class Solution {
public:
    string toLowerCase(string s) {
        
        int n=s.length();
        
        for(int i=0;s[i]!='\0';i++){
            if(s[i]>= 'A' && s[i] <='Z'){
                s[i]=s[i]-'A'+'a';     // 'a'-'A'=32
            }
        }
        return s;
        
    }
};