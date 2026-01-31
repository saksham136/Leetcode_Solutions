class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int high=letters.size()-1;
        int low=0;
        char res=letters[0];
        
        while(low<=high){
            int mid=(low+high)/2;
            if(letters[mid]<=target)
            low=mid+1;
            else if(letters[mid]>=target)
            {
                res=letters[mid];
                high=mid-1;
            }
        }
        return res;
    }
};