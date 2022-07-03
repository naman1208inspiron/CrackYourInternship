class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& v) {
        int m= v.size(), n= v[0].size();
        vector<int> ans;
        int ii=0, ji= 0, iff= m-1, jff= n-1, i, j;
        while(ii <= iff && ji<= jff){
            for(j= ji; j<=jff; j++){
                ans.push_back(v[ii][j]);
            }
            for(i= ii+1; i<= iff-1; i++){
                ans.push_back(v[i][jff]);
            }
            for(j= jff; ii != iff && j>= ji; j--){
                ans.push_back(v[iff][j]);
            }
            for(i= iff-1; ji != jff && i>ii; i--){
                ans.push_back(v[i][ji]);
            }
            ii++; ji++; iff--; jff--;
        }
        return ans;
    }
};
