class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        // method1--> reverse rows up to down and then take transpose
        reverse(matrix.begin(), matrix.end());
        for(int i=0; i<matrix.size(); i++){
            for(int j=i+1; j<matrix.size(); j++){
                swap(matrix[i][j], matrix[j][i]);
            }
        }
        
        // method2--> take transpose and the reverse each row.
        // int n= matrix.size();
        // for(int i=0; i<n; i++){
        //     for(int j=i+1; j<n; j++){
        //         swap(matrix[i][j], matrix[j][i]);
        //     }
        // }
        // for(int i=0; i<n; i++){
        //     for(int j=0; j<n/2; j++){
        //         swap(matrix[i][j], matrix[i][n-j-1]);
        //     }
        // }
    }
};
