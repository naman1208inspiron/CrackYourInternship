class Solution {
public:
    string longestPalindrome(string s) {
        int start= 0, end=0;
        int maxLen= 0;
        // for the odd lenght palindrome
        for(int i=0; i<s.size(); i++){
            int l= i,h=i;
            while(l>=0 && h<s.size()){
                if(s[l]==s[h]){
                    l--; h++;
                }
                else break;
            }
            int len= h-l-1;
            if(len> maxLen){
                start= l+1;
                maxLen= len;
                end= h-1;
            }
        }
        //for even lenght palindrome
        for(int i=0; i<s.size()-1; i++){
            int l=i, h= i+1;
            while(l>=0 && h<s.size()){
                if(s[l]==s[h]){
                    l--; h++;
                }
                else break;
            }
            int len= h-l-1;
            if(len> maxLen){
                start= l+1;
                maxLen= len;
                end= h-1;
            }
        }
        return s.substr(start, maxLen);
    }
};
