class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int lo=0, hi=0;
        while(hi < nums.size()){
            if(nums[hi]!=0){
                nums[lo++]= nums[hi];
            }
            hi++;
        }
        
        while(lo < nums.size()){
            nums[lo++]=0;
        }
    }
};
//`````````````````````````````````````````````````````````````````````
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int lo=0, hi=0;
        while(hi < nums.size()){
            if(nums[hi]!=0){
                swap(nums[lo++], nums[hi]);
            }
            hi++;
        }
    }
};
