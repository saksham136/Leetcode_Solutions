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
        
        int x=0;
        for(int i=0;i<n;i++)
        {
           if(arr[i]!=0)
           {
          arr[x++]=arr[i];
           }
        }
        while(x<n)
        {
            arr[x++]=0;
        }
        return arr;
        
        
    }
};