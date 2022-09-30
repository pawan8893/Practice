class Solution {
public:
    bool checkDistances(string s, vector<int>& distance) {
        
        unordered_map<char,int> mpp;
        
        for(int i=0;i<s.size();i++){
            if(mpp[s[i]]==0){
                mpp[s[i]]=i+1;
            }
            else{
                if(distance[s[i]-'a'] != i-mpp[s[i]]){
                    return false;
                }
            }
        }
        return true;
    }
};


/*

    Brute Force 
    
     bool checkDistances(string s, vector<int>& distance) {
        int n=s.size();
        
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(s[i]==s[j]){
                    if(j-i-1 != distance[s[i]-'a']){
                        return false;
                    }
                }
            }
        }
        return true;
    }


*/