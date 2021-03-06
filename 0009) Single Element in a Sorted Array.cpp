class Solution {
public:
    int singleNonDuplicate(vector<int>& nums){
        int l=0, h= nums.size()-1, m;
        while(l<=h){
            m= (l+h)/2;
            //it's a simple obsevation=>
            if(m%2==0){
                if(m<nums.size()-1 && nums[m+1]==nums[m]) l=m+2;
                else if(m>0 && nums[m-1]==nums[m]) h=m-2;
                else return nums[m];
            }
            else{
                if(m<nums.size()-1 && nums[m+1]==nums[m]) h=m-1;
                else if(m>0 && nums[m-1]==nums[m]) l=m+1;
                else nums[m];
            }
        }
        return nums[m];
    }
};
APPROACH 2==>
class Solution {
public:
    int singleNonDuplicate(vector<int>& nums){
        int l=0, h= nums.size()-2, m;
        while(l<=h){
            m= (l+h)>>1;
            if(nums[m]==nums[m^1]){
                //it means that we are in the left half
                l= m+1;
            }
            else {
                h= m-1;
            }
        }
        return nums[l];
    }
};
