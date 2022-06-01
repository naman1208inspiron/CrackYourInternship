class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& in) {
        sort(in.begin(), in.end());
        vector<vector<int>> ans;
        ans.push_back(in[0]);
        int j=0;
        for(int i=1; i<in.size(); i++){
            if(ans[j][1]>= in[i][0]){
                ans[j][1]= max(ans[j][1], in[i][1]);
            }
            else{
                ans.push_back(in[i]);
                j++;
            }
        }
        return ans;
    }
};
