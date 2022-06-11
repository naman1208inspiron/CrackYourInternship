class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n= nums.size()-1;
        
        int lo=0, hi= n;
        while(lo<=hi){
            if(target>nums[hi]) return hi+1;
            if(target<nums[lo]) return lo;
            
            int m= (lo+hi)/2;
            if(nums[m]==target) return m;
            else if(nums[m]>target) hi= m-1;
            else lo= m+1;
        }
        return -1;
    }
};
//````````````````````````````````````````````````````````````````
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n= nums.size()-1;
        
        int lo=0, hi= n;
        while(lo<=hi){
            // if(target>nums[hi]) return hi+1;
            // if(target<nums[lo]) return lo;
            
            int m= (lo+hi)/2;
            if(nums[m]==target) return m;
            else if(nums[m]>target) hi= m-1;
            else lo= m+1;
        }
//         just return low or high+1
        return lo;
    }
};
