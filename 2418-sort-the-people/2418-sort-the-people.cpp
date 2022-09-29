class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        vector<string> ans;
        
        unordered_map<int,string> mpp;
        
        for(int i=0;i<names.size();i++){
            mpp[heights[i]]=names[i];
        }
        
        sort(heights.begin(),heights.end());
        
        for(int i=heights.size()-1;i>=0;i--){
            ans.push_back(mpp[heights[i]]);
        }
        
        return ans;
    }
};