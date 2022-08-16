class Solution {
public:
    int firstUniqChar(string s) {
        char ch='0';
        int ans=-1;
        unordered_map<char,int>count;
        
        for(int i=0;i<s.size();i++){
            count[s[i]]++;
        }
        
        for(int i=0;i<s.size();i++){
            if(count[s[i]]==1){
                ans=i;
                break;
            }
        }
        return ans;
    }
};