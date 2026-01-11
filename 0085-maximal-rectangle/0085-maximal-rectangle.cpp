class Solution {
public:

       int mah( vector<int>arr)
    {
        int n=arr.size();
       vector<int>v1;
       vector<int>v2;
       stack<pair<int,int>>s1;
       stack<pair<int,int>>s2;
       
       for(int i=0 ; i<n ; i++){
           if(s1.size()==0)
           v1.push_back(-1);
           else if ( s1.size()>0 && s1.top().first<arr[i])
           v1.push_back(s1.top().second);
           else if ( s1.size()>0 && s1.top().first>=arr[i])
           {
           while ( s1.size()>0 && s1.top().first>=arr[i]){
               s1.pop();
           }
           if (s1.size()==0)
           v1.push_back(-1);
           else
           v1.push_back(s1.top().second);
           }
           s1.push({arr[i],i});
       }
       
       
       
       for(int i=n-1 ; i>=0 ; i--){
           if(s2.size()==0)
           v2.push_back(n);
           else if ( s2.size()>0 && s2.top().first<arr[i])
          v2.push_back(s2.top().second);
           else if ( s2.size()>0 && s2.top().first>=arr[i])
           {
           while ( s2.size()>0 && s2.top().first>=arr[i]){
               s2.pop();
           }
           if (s2.size()==0)
           v2.push_back(n);
           else
           v2.push_back(s2.top().second);
           }
           s2.push({arr[i],i});
       }
       reverse(v2.begin(),v2.end());
       
      
     
      
      long long area=0;
      for(int i=0; i<n ; i++){
          long long area1=arr[i]*(v2[i]-v1[i] -1);
          area=max(area,area1);
      }
      return area;
    }
       
    int maximalRectangle(vector<vector<char>>& matrix) {
        int m=matrix.size();
        int n=matrix[0].size();
          vector<int>a(n,0);
          int res=0;
          for(int i=0; i<m; i++)
          {

              for(int j=0; j<n; j++)
              {
                  if(matrix[i][j]=='1')
                    a[j]++;
                    else
                    a[j]=0;
                   
              }
              res=max(res, mah(a));
              

          }
          return res;
        }
        
};