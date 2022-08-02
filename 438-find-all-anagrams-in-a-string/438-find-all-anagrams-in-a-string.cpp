class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int> ans;
        
        int n=s.size();
        int k=p.size();
        if(k>n){
            return ans;
        }
        
        vector<int> vs(26,0);
        vector<int> vp(26,0);
        
        int i;
        
        for(i=0;i<k;i++){
            vp[p[i]-'a']++;
            vs[s[i]-'a']++;
        }
        
        if(vs==vp){
            ans.push_back(i-k);
        }
        
        for(int j=k;j<n;j++){
            vs[s[j]-'a']++;
            vs[s[j-k]-'a']--;
            
            if(vs==vp){
            ans.push_back(j-k+1);
            }
        }
        return ans;
    }
};