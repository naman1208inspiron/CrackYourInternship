class Solution {
public:
    int search(vector<int>& nums, int target) {
        int l=0, h= nums.size()-1, m;
        while(l<=h){
            m= (l+h)>>1;
            if(nums[m]==target) return m;
            // checking if left part is sorted or not
            if(nums[l]<=nums[m]){
                //checking if target lies in the left part or not 
                if(target>=nums[l] && target<=nums[m]){
                    h= m-1;
                }
                else l= m+1;
            }
            //if left part is not sorted then the right part would be
            else{
                //checking if the target lies in the right part or not 
                if(target>=nums[m] && target<= nums[h]){
                    l= m+1;
                }
                else h= m-1;
            }
        }
        return -1;
    }
};
