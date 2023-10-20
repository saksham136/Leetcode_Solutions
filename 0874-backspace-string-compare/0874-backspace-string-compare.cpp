class Solution {
public:
    bool backspaceCompare(string s, string t) {
        string a="";
        string b="";
        for(int i=0; i<s.size(); i++)
        {
            if(s[i]=='#'&& a.size()>0)
            a.pop_back();
             else if(s[i]=='#'&& a.size()==0)
            continue;
            else
            a+=s[i];
        }
        for(int i=0; i<t.size(); i++)
        {
            if(t[i]=='#'&& b.size()>0)
            b.pop_back();
            else if(t[i]=='#'&& b.size()==0)
            continue;
            else
            b+=t[i];
        }
        cout<<a<<" "<<b;
        if(a==b)
        return true;
        else
        return false ;
        
    }
};