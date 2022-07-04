class Solution {
public:
    int romanToInt(string s) {
        int num=0;
        
        unordered_map<char,int> table ={ {'I',1}, {'V',5}, {'X',10},
                                        {'L',50}, {'C',100}, {'D',500},{'M',1000}
                                       };
        
        for(int i=0;i<s.length();i++){
            if(table[s[i]]<table[s[i+1]]){
                num -= table[s[i]];
            }
            else{
                num += table[s[i]];
            }
        }
        
        return num;
        
    }
};


/*


    int roman(char c){
        
        switch(c){
                
                case'I':
                    return 1;
                case'V':
                    return 5;
                case'X':
                    return 10;
                case'L':
                    return 50;
                case'C':
                    return 100;
                case'D':
                    return 500;
                case'M':
                    return 1000;
                default:
                    return 0;
        }
    }
public:
    int romanToInt(string s) {
        
        int ans=0;
        int i=0;
        
        while(i<s.size()){
            
            int curr=roman(s[i]);
            int next=roman(s[i+1]);
            
            if(curr < next){
                ans += -curr; 
            }
            else{
                ans += curr;   
            }
            i++;
        }
        return ans;
    }




*/