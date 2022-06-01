class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        //KADANES ALGO ==>
        // int currSum=0; 
        // int maxSum= INT_MIN;
        // for(int i=0; i<nums.size(); i++){
        //     currSum+= nums[i];
        //     maxSum= max(maxSum, currSum);
        //     if(currSum<0) currSum=0;
        // }
        // return maxSum;
        
        return maxSA(nums, 0, nums.size()-1);
    }
    // DIVIDE & CONQUER
    int maxSA(vector<int> &nums, int l, int r){
        if(l>r) return INT_MIN;
        
        int leftsum=0, rightsum=0;
        int mid= (l+r)/2;
        
        for(int i= mid-1, currsum= 0; i>=l; i--){
            currsum+= nums[i];
            leftsum= max(leftsum, currsum);
        }
        for(int i= mid+1, currsum=0; i<=r; i++){
            currsum+= nums[i];
            rightsum= max(rightsum, currsum);
        }
        return max( {maxSA(nums, l, mid-1), maxSA(nums, mid+1, r), leftsum+ nums[mid]+ rightsum} );
    }
};
