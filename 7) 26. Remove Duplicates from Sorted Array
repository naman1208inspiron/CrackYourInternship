class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int curr=1, fill=1, unique=1;
        
        while(curr!= nums.size()){
            if(nums[curr]!=nums[curr-1]){                
                nums[fill]= nums[curr];
                fill++;
            }
            curr++;
        }
        return fill;
         
        // int n= nums.size();
        // int count=0;
        // for(int i=1; i<n; i++){
        //     if(nums[i]== nums[i-1]) count++;
        //     else nums[i-count]= nums[i];
        // }
        // return n-count;
    }
};
