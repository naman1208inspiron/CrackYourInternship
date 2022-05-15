class Solution {
public:
    bool isPalindrome(int x) {
        //naive approach-->
        // string s= to_string(x);
        // int n= s.length();
        // for(int i=0; i<n/2; i++){
        //     if(s[i]!=s[n-i-1]) return false; 
        // }
        // return true;
        
        // without converting to string-->
        if(x!=0 && x%10==0) return false; // this is to tackle the case of       x==rev/10 as this is useful in case of odd length palindrome.
        int rev=0;
        while(x>rev){
            rev= 10*rev + x%10;
            x/=10;
        }
        return (x==rev || x==rev/10);
    }
};
