class Solution {
public:
    void sortColors(vector<int>& nums) {
        int a=0, b=0, c=0;
        for(int it: nums){
            if(it==0) a++;
            else if(it==1) b++;
            else c++;
        }
        for(int i=0; i<a; i++){
            nums[i]=0;
        }
        for(int i=a; i<a+b; i++){
            nums[i]=1;
        }
        for(int i= a+b; i<a+b+c; i++){
            nums[i]=2;
        }
        
        //DUTCH NATIONAL FLAG ALGO ==>
        
        // int l=0 ,r= nums.size()-1, mid= 0;
        // while(mid<= r){
        //     if(nums[mid]==0){
        //         swap(nums[l], nums[mid]);
        //         l++, mid++;
        //     }
        //     else if(nums[mid]==1){
        //         mid++;
        //     }
        //     else{// mid==2
        //         swap(nums[r], nums[mid]);
        //         r--;
        //     }
        // }        
    }
};
