class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ans;
        // sorted version --> maps to --> all the anagrmas.
        unordered_map<string, vector<string>> mp;
        for(string it: strs){
            string initial= it;
            sort(it.begin(), it.end());
            mp[it].push_back(initial);
        }
        for(auto it: mp){
            ans.push_back(it.second);
        }
        return ans; 
    }
};
