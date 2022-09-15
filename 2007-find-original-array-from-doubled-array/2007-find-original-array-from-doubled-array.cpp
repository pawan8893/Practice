class Solution {
public:
    vector<int> findOriginalArray(vector<int>& changed) {
        int n=changed.size();
        if(n%2==1){
            return {};
        }
        sort(changed.begin(),changed.end());
        vector<int> original;
        
        unordered_map<int,int> mpp;
        
        for(int i=0;i<n;i++){
            mpp[changed[i]]++;
        }
        
        for(int i=0;i<n;i++){
            if(mpp[changed[i]]==0){
                continue;
            }
            if(mpp[changed[i]*2]==0){
                return {};
            }
            original.push_back(changed[i]);
            mpp[changed[i]]--;
            mpp[changed[i]*2]--;
        }
        return original;
        
    }
};