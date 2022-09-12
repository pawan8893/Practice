class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {
        sort(tokens.begin(),tokens.end());
        int ans=0;
        int s=0,e=tokens.size()-1;
        int score=0, maxScore=0;
        
        while(s<=e){
            if(power>=tokens[s]){
                score +=1;
                power -=tokens[s];
                maxScore=max(score,maxScore);
                s++;
            }
            else if(score>=1){
                power +=tokens[e];
                score -=1;
                e--;
            }
            else{
                break;
            }
        }
        return maxScore;
    }
};