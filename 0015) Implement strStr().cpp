// ````````````````````naive ``````````````````````````
class Solution {
public:
    int strStr(string haystack, string needle) {
        int n= haystack.size(), m= needle.size();
        if(m==0) return 0;
        // traversing the haystack uptill n-m index to find if we get matching chars in needle. 
        for(int i=0; i<=n-m; i++){
            // j index is used for traversing the needle index and if chars start to match--> it is used to traverse the haystack index ahead in that case. 
            int j=0;
            for(;j<m; j++){
                if(haystack[i+j]!= needle[j]) break;
            }
            // if j==m it means that we have traversed the whole needle string and that can only be done when all the needle chars are found.
            if(j== m) return i;
        }
        return -1;
    }
};
`````````````````````optimised--> kmp alog`````````````````````````
