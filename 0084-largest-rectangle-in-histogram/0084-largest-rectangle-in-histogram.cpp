class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {

         int n=heights.size();
         stack<pair<int,int>>st;
         vector<int>left;


        for(int i=0;i<n;i++)
        {
            
             while( !st.empty()  &&heights[i]<=st.top().first)
            {
                st.pop();
            }
            if(st.empty())
            {
                left.push_back(-1);
            }
            else
            {
                left.push_back(st.top().second);
            }
            st.push({heights[i],i});
        }

         stack<pair<int,int>>st1;
        vector<int>right;

        for(int i=n-1;i>=0;i--)
        {
            while(!st1.empty() && heights[i]<=st1.top().first)
            {
                st1.pop();
            }
            if(st1.empty())
            {
               right.push_back(n);
            }
                else
            {
                right.push_back(st1.top().second);
            }
            st1.push({heights[i],i});
        }

        reverse(right.begin(),right.end());


        int ans=0;
        for(int i=0;i<n;i++)
        {
            int x=heights[i]*(right[i]-left[i]-1);
            ans=max(ans,x);
        }

        return ans;
        
    }
};