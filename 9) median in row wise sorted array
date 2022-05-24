class Solution{   
public:
    int median(vector<vector<int>> &matrix, int r, int c){
        int start=1, end= 2000, midVal;
        int totalEle= r*c;
        while(start<=end){
            midVal= (start+end)/2;
            int count=0;
            for(int i=0; i<r; i++){
                int l=0, h= c-1;
                //finding the immediate index greater than midVal
                while(l<=h){
                    int m= (l+h)/2;
                    if(matrix[i][m]>midVal) h= m-1;
                    else l= m+1;
                }
                count+=l;
            }
            if(count>totalEle/2) end= midVal-1;
            else start= midVal+1;
        }
        return start;
    }
};
