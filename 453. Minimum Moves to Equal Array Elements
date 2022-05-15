class Solution {
public:
    int minMoves(vector<int>& nums) {
        // int count=0;
        // while(isNotEq(nums)){
        //     sort(nums.begin(), nums.end());
        //     for(int i=0; i<nums.size()-1; i++){
        //         nums[i]+=1;
        //     }
        //     count++;
        // }
        // return count;
        
        int mini= INT_MAX, tsum=0;
        int n= nums.size();
        for(int i=0; i<n; i++){
            tsum+=nums[i];
            mini= min(mini, nums[i]);
        }
        return tsum-(mini*n);
        
    }
    // bool isNotEq(vector<int> &nums){
    //     for(int i=0; i<nums.size()-1; i++){
    //         if(nums[i]!= nums[i+1]) return true;
    //     }
    //     return false;
    // }
};
