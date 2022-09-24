class Solution {
public:
    int lengthOfLastWord(string s) {
        
        
        // TC -> O(n)
        // SC -> O(1)
        
        int count=0;
        int n=s.size();
        for(int i=n-1;i>=0;i--){
            if(s[i]==' '){
                continue;
            }
            
            while(i>=0 && s[i]!=' '){
                count +=1;
                i--;
            }
            break;
        }
        return count;
    }
};

/*

     TC -> O(n)
     SC -> O(n)

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

*/


/*

2nd Approach

    TC -> O(n)
    SC -> O(n)


class Solution {
    string reverse(string s){
        stack<string> st;
        string ans;
        
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
        
        while(!st.empty()){
            ans +=st.top();
            st.pop();
            
            if(!st.empty()){
                ans +=' ';
            }
        }
        
        return ans;
    }
public:
    int lengthOfLastWord(string s) {
        if(s.size()==0){
            return 0;
        }
        
        int count=0;
        
        string str=reverse(s);
        
        for(int i=0;i<str.size();i++){
            if(str[i]==' '){
                break;
            }
            else{
                count +=1;
            }
        }
        return count;
    }
};

*/