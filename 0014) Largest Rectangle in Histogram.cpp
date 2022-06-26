class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int n= heights.size(), area= 0;

        vector<int> nse(n), pse(n);//  nse--> next smaller element, pse--> previous smaller element.
        
        findNSE(heights, nse);
        findPSE(heights, pse);
        
        for(int i=0; i<n; i++){
            int r= nse[i];
            int l= pse[i];
            
            if(r== -1) r= n;
            
            int width= r-l-1;
            area= max(area, heights[i]*width);
        }
        return area;
    }
    void findNSE(vector<int>&v, vector<int>&nse){
        stack<int> st; //stack contains index 
        int ind= v.size()-1;
        
        while(ind>=0){
            while(!st.empty() && v[st.top()] >= v[ind]) st.pop();
            
            nse[ind]= st.empty() ? -1 : st.top();
            
            st.push(ind);
            ind--;
        }
    }
    void findPSE(vector<int>&v, vector<int>&pse){
        stack<int> st;
        int ind= 0;
        while(ind < v.size()){
            while(!st.empty() && v[st.top()] >= v[ind]) st.pop();
            
            pse[ind]= st.empty() ? -1 : st.top();
            
            st.push(ind);
            ind++;
        }
    }
};
