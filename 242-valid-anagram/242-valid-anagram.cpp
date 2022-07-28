class Solution {
public:
    bool isAnagram(string s, string t) {
       
        if(s.length()!=t.length()){
            return false;
        }
        
        unordered_map<char,int> count;
        
        for(int i=0;i<s.length();i++){
            count[s[i]]++;
            count[t[i]]--;
        }
        
        for(auto it : count){
            if(it.second){
                return false;
            }
        }
        return true;
    }
};


/*
     Approach 1
     
     bool isAnagram(string s, string t) {
       
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        
        return s==t;
    }


*/
