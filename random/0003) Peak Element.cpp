//```````````````````````O(N)````````````````````````
class Solution
{
    public:
    int peakElement(int arr[], int n)
    {
       // Your code here
       for(int i=0; i<n; i++){
           int left= INT_MIN, right= INT_MIN;
           if(i>0) left= arr[i-1];
           if(i<n-1) right= arr[i+1];
           if(arr[i]>= left && arr[i]>= right) return i;
       }
       return -1;
       
    }
};
//```````````````````````````O(logN)````````````````````
class Solution
{   int findPeak(int arr[], int lo, int hi){
    if(lo == hi) return lo;
    
    int mid= (lo+hi)/2;
    //check if mid is the peak
    if(arr[mid]>= arr[mid-1] && arr[mid] >= arr[mid+1]) return mid;
    //if next element of mid is greater than mid, then peak element is on the right side.
    else if(arr[mid+1]> arr[mid]) return findPeak(arr, mid+1, hi);
    // else on left side
    return findPeak(arr, lo, mid-1);
}
    public:
    int peakElement(int arr[], int n)
    {
       return findPeak(arr, 0, n-1);
    }
};
