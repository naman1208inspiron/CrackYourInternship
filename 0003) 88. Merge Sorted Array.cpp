class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n){
        int p1= m-1, p2= n-1;
        int i= m+n-1;
        while(p2>=0 && p1>=0){
            if(nums1[p1]> nums2[p2]){
                nums1[i]= nums1[p1];
                i--, p1--;
            }
            else{
                nums1[i]= nums2[p2];
                i--, p2--;
            }
        }
        if(p2>=0){
            while(p2>=0){
                nums1[i]= nums2[p2];
                p2--, i--;
            }
        }
        // no need of this 
        // cuz if p1>=0, and we came out of the loop it means that p2 is less than 0, and p2 will be less than 0 iff all the elements in num2 have gone to their correct position in nums1. 
        // if(p1>=0){
        //     while(p1>=0){
        //         nums1[i]= nums1[p1];
        //         p1--, i--;
        //     }
        // }
    }
};
