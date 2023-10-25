class Solution {
public:

 int kthGrammar(int n, int k) {
        if(n==1 && k==1)
        {
            return 0;
        }
        int mid= pow(2,n-1)/2;
        if( k<=mid)
        return  kthGrammar(n-1,k);
        else
        return  !kthGrammar(n-1,k-mid);
    }


    // int kthGrammar(int n, int k) {
    //     if(n==1)
    //     return 0;
    //     int i=2;
    //     string s="0";
    //     while(i<=n)
    //     {
    //         string x="";
    //       for(int j=0; j<n; j++)
    //       {
    //           if(s[j]=='0')
    //           x+="01";
    //           else
    //           x+="10";
              
    //       }
    //       s=x;
    //       i++;

    //     }
    //     int a=s[k-1]-'0';
    //     return a;
        
    // }
};