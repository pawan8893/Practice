class Solution {
public:
    int lengthOfLastWord(string s) {
        string ans;
        stack<string> st;
        
        for(int i=0;i<s.size();i++){
            string word;
            if(s[i]==' '){
                continue;
            }
            
            while(i<s.size() && s[i]!=' '){
                word +=s[i];
                i++;
            }
            st.push(word);
        }
        
        return st.top().size();
    }
};