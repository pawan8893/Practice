class Solution {
public:
    void sortColors(vector<int>& nums) {
        int count0=0;
        int count1=0;
        int count2=0;
        
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
                count0++;
            }
            else if(nums[i]==1){
                count1++;
            }
            else{
                count2++;
            }
        }
        
        int j=0;
        while(count0){
            nums[j++]=0;
            count0--;
        }
        while(count1){
            nums[j++]=1;
            count1--;
        }
        while(count2){
            nums[j++]=2;
            count2--;
        }
        
    }
};