class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> mp;
        vector<int> ans;
        for(int i=0; i<nums.size(); i++){
            auto it= mp.find(target- nums[i]);
            
            if(it!= mp.end()){
                ans.push_back(i);
                ans.push_back(it->second);
                break;
            }
            else{
                mp[nums[i]]=i;
            }
        }
        return ans;
    }
};
