class Solution {
public:
    int candy(vector<int>& arr) {
        int n=arr.size();
        int c=n;
        int i=1;

        while(i<n)
        {
            if(arr[i]==arr[i-1]){
                    i++;
                    continue;
            }
          
        
        int peak=0;
         while(arr[i]>arr[i-1])
         {
            peak++;
            c+=peak;
            i++;
            if(i==n)
            return c;
         }

         int dip=0;
         while(i<n && arr[i]<arr[i-1])
         {
            dip++;
            c+=dip;
            i++;
         }
         c-=min(peak,dip);



        }
        return c;
       
         
        
      


        
    }
};