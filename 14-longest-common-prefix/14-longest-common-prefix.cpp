class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        
        /*
             Algo
             
             step 1---We first sort the array of strings.
             step 2---Then, we choose the first and last string in the array. [They are supposed to be the most different among                all the pairs of strings in the sorted array]
             step 3---We just compare how many common characters match from index i = 0 of these two strings.
        
        
        */
        
        int n=strs.size();
        sort(strs.begin(),strs.end());
        string a=strs[0];
        string b=strs[n-1];
        
        string ans="";
        
        for(int i=0;i<a.size();i++){
            if(a[i]==b[i]){
                ans +=a[i];
            }
            else{
                break;
            }
        }
        return ans;
    }
};