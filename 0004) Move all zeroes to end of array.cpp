class Solution{
public:
	void pushZerosToEnd(int arr[], int n) {
	    int fill_at=0, curr=0;
	    while(curr<n){
	        if(arr[curr]==0){
	            curr++;
	        }
	        else{
	            arr[fill_at]= arr[curr];
	            fill_at++; curr++;
	        }
	    }
	    while(fill_at<n){
	        arr[fill_at++]= 0;
	    }
	}
};
