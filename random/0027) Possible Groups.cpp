class Solution{   
public:
    long long findgroups(int arr[], int n) {
        long long c[3]= {0};
        for(int i=0; i<n; i++){
            int rem= arr[i] % 3;
            c[rem]++;
        }
        long long ans=0;
        // size 2 sequences
        // --> take all the 2 nums with 0 rem
        ans+= (c[0] * (c[0]-1) )/2;
        // --> take 1 num with 1 rem and the other one with 2 rem
        ans+= c[1] * c[2];
        
        // size 3 sequences
        // --> take 3 numbers with 0 remainder --> nC3;
        ans+= ( c[0] * (c[0]-1) * (c[0]-2) )/6;
        // --> take 3 numbers with 1 remainder
        ans+= ( c[1] * (c[1]-1) * (c[1]-2) )/6;
        // --> take 3 numbers with 2 as remainder
        ans+= ( c[2] * (c[2]-1) * (c[2]-2) )/6;
        // --> take one numbers with each remainder 0, 1, 2
        ans+= c[0] * c[1] * c[2] ;
        
        return ans;
    }
};
