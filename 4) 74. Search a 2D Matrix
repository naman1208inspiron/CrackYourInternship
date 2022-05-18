class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row= matrix.size(), col= matrix[0].size();
        for(int i=0; i<row; i++){
            if(target<= matrix[i][col-1]){
                return binarySearch(matrix, i, target);
            }
        }
        return false;
    }
    bool binarySearch(vector<vector<int>> &matrix, int row, int target){
        int l= 0, h= matrix[0].size();
        while(l<=h){
            int m= l+(h-l)/2;
            if(matrix[row][m]==target) return true;
            else if(matrix[row][m]> target) h= m-1;
            else l= m+1;
        }
        return false;
    }
};

APPROACH 2--> 

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row= matrix.size(), col= matrix[0].size();
        int i=0, j= col-1;
        while(i<row && j>=0){
            if(matrix[i][j]> target){
                j--;
            }
            else if(matrix[i][j]<target){
                i++;
            }
            else return true; // when same
        }
        return false;
    }
};
