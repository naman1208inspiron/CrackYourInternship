class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
//we will sort the array of string and then compare just the first and last element as they are only upposed to be the most different 
        int n= strs.size();
        sort(strs.begin(), strs.end());
        string l= strs[0], h= strs[n-1], ans="";;
        for(int i=0; i<min(l.size(), h.size()); i++){
            if(l[i]==h[i]) ans+= l[i];
            else break;
        }
        return ans;
    }
};
