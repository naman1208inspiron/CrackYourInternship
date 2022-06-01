class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n<=0) return false;
        // return (ceil(log2(n))== floor(log2(n)));
        
        // return ((n & (n-1))==0);
        // the above method is based on observation--> 
        //    8= 1000               4=0100
        //    7= 0111               3=0011
        
        while(n%2==0) n/=2;
        return n==1;
    }
};
