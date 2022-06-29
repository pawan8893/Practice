class Solution {
public:
    string reverseWords(string s) {
        if(s.length()==0){
            return s;
        }
        
        stack<string> st;
        string ans;
        
        for(int i=0;i<s.length();i++){
            string word;
            
            if(s[i]==' '){   //skip spaces
                continue;
            }
            while(i<s.length() && s[i] !=' '){   //store continuous letters into word
                word += s[i];
                i++;
            }
            st.push(word);       // push the word to the stack
        }
        
        
        while(!st.empty()){
            ans += st.top();
            st.pop();
            if(!st.empty()){
                ans += " ";
            } 
        }
        return ans;
    }
};