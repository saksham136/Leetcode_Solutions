class Solution {
public:
    int candy(vector<int>& arr) {
        int n=arr.size();
        vector<int>c(n,1);
         vector<int>d(n,1);
         int ans=0;


        for(int i=1;i<n;i++)
        {
               if(arr[i]>arr[i-1])
                {
                    c[i]=c[i-1]+1;
                }
        }
      
        for(int i=n-2;i>=0;i--)
        {
            if(arr[i]>arr[i+1])
            {
                d[i]=d[i+1]+1;
            }
        }

        for(auto x:c)
        cout<<x<<" ";

        for(int i=0;i<n;i++)
        ans+=max(c[i],d[i]);


       
       return ans;


         
        
      


        
    }
};