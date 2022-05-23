BRUTE FORCE APPROACH=>
class Solution {
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        map< vector<int>, int> mp;
        vector<vector<int>> ans;
        vector<int> temp;
        sort(nums.begin(), nums.end());
        fxn(nums,0, temp, ans, mp);
        return ans;
    }
    void fxn(vector<int>& nums, int i, vector<int> temp, vector<vector<int>>&ans, map<vector<int>, int> &mp){
        if(i==nums.size()){
            //sort(temp.begin(), temp.end());
            if(mp.find(temp)==mp.end()){
                ans.push_back(temp);
                mp[temp]++;
            }
            return;
        }
        //including element
        temp.push_back(nums[i]);
        fxn(nums, i+1, temp, ans, mp);
        //excluding element
        temp.pop_back();
        fxn(nums, i+1, temp, ans, mp);
        
        return;
    }
};
BETTER APPROACH=>

