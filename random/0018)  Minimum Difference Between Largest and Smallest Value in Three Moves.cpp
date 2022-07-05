// https://leetcode.com/problems/minimum-difference-between-largest-and-smallest-value-in-three-moves/
class Solution {
public:
    int minDifference(vector<int>& nums) {
        int n= nums.size();
        if(n <= 4) return 0;
        /*
        4 cases--> kyukii beech se delete karne ka matlab nai hai
        a> deleting 3 largest
        b> deleting 2 largest, 1 smallest
        c> deleting 1 largest, 2 smallest
        d> deleting 3 smallest
        */
        sort(nums.begin(), nums.end());
        int ans= INT_MAX;
        // 4 cases--> 
        ans= min(ans, nums[n-4]- nums[0]);
        ans= min(ans, nums[n-3]- nums[1]);
        ans= min(ans, nums[n-2]- nums[2]);
        ans= min(ans, nums[n-1]- nums[3]);
        return ans;
    }
};
