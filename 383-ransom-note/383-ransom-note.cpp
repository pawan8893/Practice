class Solution {
public:
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
};