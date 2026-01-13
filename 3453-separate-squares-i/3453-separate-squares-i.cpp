class Solution {
public:

    double calcarea (vector<vector<int>>& squares , double yc)
    {
        double area=0;
        int n=squares.size();

        for(int i=0;i<n;i++)
        {
            double y=squares[i][1];
            double l=squares[i][2];

            if(y+l<=yc)
            {
                area+=(double)(l*l);
            }
            else if ( y<yc)
            {
                area+=((yc-y)*l);
            }
        }
        return area;
    }


    double separateSquares(vector<vector<int>>& squares) {
        double ta=0;
        double h=0;
        int n=squares.size();
        for(int i=0;i<n;i++)
        {
            
            double l1=squares[i][2];
            double y1=squares[i][1];
            ta+=(l1*l1);
            h=max(h,y1+l1);    
        }


    
        
        double l=0;
        while(abs(h-l)>=1e-6)
        {
            double mid=l+(h-l)/2;
            double ca=calcarea(squares,mid);
            if(ca>=(ta/2))
            h=mid;
            else 
            l=mid;
        }
        return l;

        
    }
};