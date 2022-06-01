class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int nums1=-1, nums2=-1, c1=0, c2=0;
        //there could be at most two majority element in this case.
        for(int it: nums){
            if(it== nums1) c1++;
            else if(it==nums2) c2++;
            else if(c1==0){
                nums1= it;
                c1++;
            }
            else if(c2==0){
                nums2=it;
                c2++;
            }
            else{
                c1--;
                c2--;
            }
        }
        vector<int> ans;
        c1= c2=0;
        for(int it: nums){
            if(it== nums1) c1++;
            else if(it== nums2) c2++;
        }
        if(c1> floor( nums.size()/3 )) ans.push_back(nums1);
        if(c2> floor( nums.size()/3 )) ans.push_back(nums2);
        return ans;
    }
};
