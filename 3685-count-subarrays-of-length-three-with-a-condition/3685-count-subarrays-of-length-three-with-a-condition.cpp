class Solution {
public:
    int countSubarrays(vector<int>& nums) {
        int i=0;
        int j=1;
        int k=2;
        int n=nums.size();
        int count=0;

        while(k<n)
        {
            if(nums[j]==(nums[i]+nums[k])*2){
                count++;
            }
            i++;
            j++;
            k++;

        }
        return count;
        
    }
};