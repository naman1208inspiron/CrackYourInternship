class Solution {
private:
    bool isPalindrome(string &s, int l, int h){
        while(l<h){
            if(s[l++]!= s[h--]) return false;
        }
        return true;
    }
    
    void find(int ind, string &s, vector<string>&ds, vector<vector<string>> &ans){
        if(ind==s.size()){
            ans.push_back(ds);
            return;
        }
        for(int i=ind; i<s.size(); i++){
            if(isPalindrome(s, ind, i)){
                ds.push_back(s.substr(ind, i-ind+1));
                find(i+1, s, ds, ans);
                ds.pop_back();
            }
        }
    }
    
public:
    vector<vector<string>> partition(string s) {
        vector<vector<string>> ans;
        vector<string> ds;
        find(0, s, ds, ans);
        return ans;
    }
    
};
