class Solution{
    public:
    //Function to find the minimum number of platforms required at the
    //railway station such that no train waits.
    int findPlatform(int arr[], int dep[], int n)
    {
    	sort(arr, arr+n);
    	sort(dep, dep+n);
    	int a= 1, d=0;
    	//a pointer at arrival array and d pointer at departure array
    	int platform= 1;
    	while(a<n && d<n){
    	    if(arr[a]<=dep[d]){
              // new platform needed
    	        platform++;
    	    }
    	    else{
    	        d++;
    	    }
    	    a++;
    	}
    	return platform;
    }
};
