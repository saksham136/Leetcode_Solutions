class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int c5=0;
        int c10=0;
        int c20=0;
        int n=bills.size();
        if(bills[0]==10 || bills[0]==20)
        return false;
        else
        c5++;
          for(int i=1;i<n;i++)
        {
            int x=bills[i];
            if(x==20)
            {
                while(c10>0 && x>15)
                {
                    x-=10;
                    c10--;
                }
                while(x>5 && c5>0)
                {
                    x-=5;
                    c5--;
                }
                if(x==5)
                    {
                      c20++;
                        continue;
                    }
                    else
                    return false;
            }
                 else  if(x==10)
              {
                 while(x>5 && c5>0)
                {
                    x-=5;
                    c5--;
                }
                if(x==5)
                    {
                      c10++;
                        continue;
                    }
                    else
                    return false;
              }
              else 
              {
                c5++;
                continue;
              }


            }
            
            return true;
        }

        
    
};