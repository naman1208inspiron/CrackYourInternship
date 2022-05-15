class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        
        sort(nums.begin(), nums.end());
        int len= nums.size();
        int a= nums[0]*nums[1]*nums[len-1];
        int b= nums[len-1]*nums[len-2]*nums[len-3];
        return max(a,b);
        
    }
};
