class Solution{
public:
    // m is maximum of number zeroes allowed to flip
    // n is size of array
    int findZeroes(int arr[], int n, int m) {
        int lo=0, hi=0, maxi= INT_MIN, zeroCnt=0;
        while(hi < n){
            if(arr[hi]==0) zeroCnt++;
            while(zeroCnt > m){
                if(arr[lo]==0) zeroCnt--;
                lo++;
            }
            int currLen= hi-lo+1;
            
            maxi= max(maxi, currLen);
            hi++;
        }
        return maxi;
    }  
};
////////////////////////////////////////
class Solution{
public:
    // m is maximum of number zeroes allowed to flip
    // n is size of array
    int findZeroes(int arr[], int n, int m) {
        int lo=0, hi=0, maxi= INT_MIN, currLen=0, zeroCnt=0;
        while(hi < n){
            if(arr[hi]==0) {
                zeroCnt++;
                if(zeroCnt <= m) currLen++;
                else{
                    while(zeroCnt > m){
                        if(arr[lo]==0) zeroCnt--;
                        else currLen--;
                        lo++;
                    }
                }
            }
            else if(arr[hi]== 1) currLen++;
            
            hi++;
            maxi= max(maxi, currLen);
        }
        return maxi;
    }  
};
