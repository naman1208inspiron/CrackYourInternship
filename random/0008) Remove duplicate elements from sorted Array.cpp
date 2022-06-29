class Solution{
public:
    int remove_duplicate(int arr[],int n){
        int p1= 0, p2= 1;
        // p1 at 0th and p2 at p2 
        // p1 ko first unique par rakhna hai aur p2 ko first next unique par
        while(p2<n){
            if(arr[p1]!= arr[p2]){
                p1++;
                arr[p1]= arr[p2];
            }
            p2++;
        }
        return p1+1;
    }
};
