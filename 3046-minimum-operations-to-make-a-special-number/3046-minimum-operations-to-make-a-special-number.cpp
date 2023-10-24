class Solution {
public:
    int minimumOperations(string num) {
        int n=num.size();
        int i=n-1;
        int ans=n;
        int c=0;

        while(i>=0 && num[i]!='5' )
        {
            i--; 
            c++;
        }
        i--;
        while(i>=0 && num[i]!='2' && num[i]!='7')
        {
            i--;
            c++;
        }
        if(i>=0)
        ans=min(ans,c);
        i=n-1;
        
        c=0;
        while(i>=0 && num[i]!='0')
        {
            i--;
            c++;
        }
        if(i>=0)
        ans=min(ans,n-1);
        i--;
        while(i>=0 && num[i]!='0' && num[i]!='5')
        {
            i--;
            c++;
        }
        if(i>=0)
        ans=min(ans,c);

       return ans;
        
    }
};