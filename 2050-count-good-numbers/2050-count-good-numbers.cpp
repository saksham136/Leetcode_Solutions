class Solution {
public:

      long long m=1e9+7;
      long long cp(long long a ,long long b)
      {
        if(b==0)
        return 1;
          
        long long x=cp(a,b/2);
        long long result=x*x%m;
        if(b%2==1)
        result=a*result%m;
        return result;


      }
     
    int countGoodNumbers(long long n) {
        return (long long)cp(5,(n+1)/2)*cp(4,n/2)%m;
      

        
              
        
    }
};