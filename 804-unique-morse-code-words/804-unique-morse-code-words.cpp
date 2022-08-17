class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        string s[]={".-","-...","-.-.","-..",".","..-.","--.","....","..",".---",
                    "-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-",
                    "..-","...-",".--","-..-","-.--","--.."};
        
        unordered_map<string,int> count;
        
        for(int i=0;i<words.size();i++){
            string wrds=words[i];
            
            string code="";
            
            for(int j=0;j<wrds.size();j++){
                code +=s[wrds[j]-'a'];
            }
            count[code]++;
        }
        
        return count.size();
        
    }
};