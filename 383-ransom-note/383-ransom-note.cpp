class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        
        vector<int> v(26,0);
        
        for(int i=0;i<magazine.size();i++){
            v[magazine[i]-'a']++;
        }
        
        int count=0;
        
        for(int i=0;i<ransomNote.size();i++){
            if(v[ransomNote[i]-'a'] >0){
                count++;
                v[ransomNote[i]-'a']--;
            }
        }
        
        if(count==ransomNote.size()){
            return true;
        }
        else{
            return false;
        }
        
    }
};


/*
 Using Map Approach
 
 
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char,int>mpp;
        
        for(int i=0;i<magazine.size();i++){
            mpp[magazine[i]]++;
        }
        
        int j=0;
        
        for(int i=0;i<ransomNote.size();i++){
            if(mpp.find(ransomNote[i]) != mpp.end() && mpp[ransomNote[i]] !=0){
                mpp[ransomNote[i]]--;
                j++;
            }
        }
        
        if(j==ransomNote.size()){
            return true;
        }
        else{
            return false;
        }
    }



*/