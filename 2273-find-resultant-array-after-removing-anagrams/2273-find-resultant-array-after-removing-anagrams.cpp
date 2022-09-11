class Solution {
    bool isAnagram(string str1,string str2){
        if(str1.size() != str2.size()){
            return false;
        }
        
        unordered_map<char,int> cnt;
        
        for(auto ch:str1) cnt[ch]++;
        for(auto ch:str2) cnt[ch]--;
        
        for(auto it:cnt){
            if(it.second){
                return false;
            }
        }
        return true;
    }
public:
    vector<string> removeAnagrams(vector<string>& words) {
        vector<string> ans;
        int n=words.size();
        
        for(int i=0;i<n;){
            int j=i+1;
                while(j<n && isAnagram(words[i],words[j])){
                    j++;
                }
            ans.push_back(words[i]);
            i=j;
        }
        return ans;
    }
};