class Solution {
public:
    vector<int> applyOperations(vector<int>& arr) {
        int n=arr.size();
         
        for(int i=1;i<n;i++)
        {
            if(arr[i]==arr[i-1])
            {
                arr[i-1]*=2;
                arr[i]=0;
                i++;
            }

        }
        vector<int>ans(n,0);
        int x=0;
        for(int i=0;i<n;i++)
        {
           if(arr[i]!=0)
           {
            ans[x]=arr[i];
            x++;
           }
        }
        return ans;
        
        
    }
};