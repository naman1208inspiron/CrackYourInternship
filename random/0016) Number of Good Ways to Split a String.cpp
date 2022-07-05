class Solution {
public:
    int numSplits(string s) {
        int n= s.size();
        unordered_set<int> st;
        vector<int> fromLeft(n), fromRight(n);
        for(int i=0; i<n; i++){
            st.insert(s[i]);
            fromLeft[i]= st.size();
        }
        st.clear();
        for(int i= n-1; i>=0; i--){
            st.insert(s[i]);
            fromRight[i]= st.size();
        }
        int cnt=0;
        for(int i=0; i<n-1; i++){
            if(fromLeft[i]== fromRight[i+1]) cnt++;
        }
        return cnt;
    }
};
