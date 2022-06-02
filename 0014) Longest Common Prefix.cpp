// ``````````````naive solution --> TC: O(n*logn*m) || where m is size of the string and n is size of array 
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
// ```````````good approach TC: O(n*m)````````````````````````````````
class Solution {
public:
    string longestCommonPrefix(vector<string>& str) {
        string ans= str[0];
        for(int i=1; i<str.size(); i++){
            int j;
            for(j= 0; j< str[i].size(); j++){
                if(str[i][j]!= ans[j]) break;
            }
            ans= ans.substr(0, j);
            if(ans=="") return ans;
        }
        return ans;
    }
};
