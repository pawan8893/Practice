class Solution {
public:
    int reverse(int x) {
        int value=0;
        while(x!=0)
        {
            
            int r=x%10;
            if(value>INT_MAX/10 || value < INT_MIN/10)
            {
                return 0;
            }
            value=(value)*10+r;
            x=x/10;
        }
        return value;
    }
};