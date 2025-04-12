class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {

        bool isone=false;
        int n=nums.size();
        
         for(int i=0;i<n;i++)
         {
            if(nums[i]==1)
            isone=true;
         }

         if(!isone)
         return 1;

         for(int i=0;i<n;i++)
         {
            if(nums[i]<=0 || nums[i]>n)
            nums[i]=1;
         }
        
        for(int i=0;i<n;i++)
        {
           int idx=abs(nums[i])-1;
           nums[idx]=-(abs(nums[idx]));
        }

        for(int i=0;i<n;i++)
        {
            if(nums[i]>0)
            return i+1;
        }

        return n+1;
        



    }
};