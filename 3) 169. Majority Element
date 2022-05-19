class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int, int> mp;
        for(int it: nums){
            mp[it]++;
        }
        int min= floor(nums.size()/2);
        for(auto it: mp){
            if(it.second> min){
                return it.first;
            }
        }
        return -1;
    }
};
APPROACH 2-->
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count=0, candidate;
        for(int it: nums){
            if(count==0) candidate= it; 
            
            if(candidate== it) count++;
            else if(candidate!= it) count--;
        }
        return candidate;
    }
};
