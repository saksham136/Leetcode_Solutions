class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& in, vector<int>& nin) {
        
        vector<vector<int>>ans;
        int n=in.size();
        int i=0;

        while(i<n){
           if(nin[1]<in[i][0])
           {
              break;
           }
           else if (in[i][1]<nin[0])
           {
                ans.push_back(in[i]);
           }
             else
           {
             nin[0]=min(nin[0],in[i][0]);
             nin[1]=max(in[i][1],nin[1]);

           }

           i++;
        }
        ans.push_back(nin);
       while(i<n)
       {
           ans.push_back(in[i]);
           i++;
       }
      

       return ans;


    }
        


};