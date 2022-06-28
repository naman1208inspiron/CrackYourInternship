class Solution 
{   bool knows(int a, int b, vector<vector<int> >& M){
        return M[a][b];
    }
    public:
    
    //Function to find if there is a celebrity in the party or not.
    int celebrity(vector<vector<int> >& M, int n) 
    {
        stack<int>st;
        //pushing into stack
        for(int i=0; i<n; i++){
            st.push(i);
        }
            // taking two elements and checking
        while(st.size()> 1){
            int a= st.top(); st.pop();
            int b= st.top(); st.pop();
            if(knows(a,b, M)){
                // if a knows b, then a cannot be celebrity
                st.push(b);
            }
            else if(knows(b,a, M)){
                st.push(a);
            }
        }
        int candidate= st.top();
        // the top element is potential candidate 
        // so verifying it
        for(int i=0; i<n; i++){
            if(knows(candidate, i, M)) return -1;
            if(i != candidate){                
                if( !knows(i, candidate, M)) return -1;
            }
        }
        // int zero=0, one= 0;
        // for(int i=0; i<n; i++){
        //     if(M[candidate][i]==0) zero++;
        //     if(M[i][candidate]== 1) one++;
        // }
        // if(zero != n) return -1;
        // if(one != n-1) return -1;
        return candidate;
    }
