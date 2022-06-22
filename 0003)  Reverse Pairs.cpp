class Solution {
public:
    int reversePairs(vector<int>& nums) {
        int count=0;
        mergeSort(nums, 0, nums.size()-1, count);
        return count;
    }
    void mergeSort(vector<int> &nums, int l, int r, int &count){
        if(l>=r) return;
        int mid= l+ (r-l)/2;
        mergeSort(nums, l, mid, count);
        mergeSort(nums, mid+1, r, count);
        merge(nums, l, mid, r, count);
    }
    void merge(vector<int> &nums, int l, int mid, int r, int &count){
        int n1 = mid-l+1, n2= r-mid;
        vector<int> tmp1(n1), tmp2(n2);
        
        for(int i=0; i<n1; i++) tmp1[i]= nums[l+i];
        for(int i=0; i<n2; i++) tmp2[i]= nums[mid+1+i];
        
        
        int p1=0, p2=0, k=l;
        while(p1<n1 && p2<n2){
            if(tmp1[p1]/2.0 >  tmp2[p2]){
                p2++;
                count+= n1-p1;
            }   
            else p1++;
        }
        // actual merging part starts here.
        p1=0, p2=0;
        while(p1<n1 && p2<n2){
            if(tmp1[p1]<= tmp2[p2]){
                nums[k++]= tmp1[p1++];
            }
            else{
                nums[k++]= tmp2[p2++];
            }
        }
        while(p1<n1) nums[k++]= tmp1[p1++];
        while(p2<n2) nums[k++]= tmp2[p2++];
        
    }
};
