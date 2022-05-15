class Solution {
public:
    int missingNumber(vector<int>& nums) {
        // naive approach--> sort and search
        
        // sum method-->
        // int len= nums.size();
        // int sum= (len*(len+1)) /2;
        // for(int it: nums){
        //     sum-= it;
        // }
        // return sum;
        
        // bitwise approach-->
        int ans= nums.size();
        for(int i=0; i<nums.size(); i++){
            ans^=nums[i];
            ans^=i;
        }
        return ans;
    }
};
