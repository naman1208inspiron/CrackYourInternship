// ````````````````````brute force--> O(N) time but space --> O(2N)````````````````````````````
class Solution {
public:
    void findrightMax(vector<int> &v, vector<int>&height){
        v[height.size()-1]= height[height.size()-1];
       for(int i= height.size()-2; i>=0; i--){
           v[i]= max(v[i+1], height[i]);
       }
    }
    void findleftMax(vector<int> &v, vector<int>&height){
        v[0]= height[0];
        for(int i=1; i<height.size(); i++){
            v[i]= max(v[i-1], height[i]);
        }
       
    }
    int trap(vector<int>& height) {
        int size= height.size();
        vector<int> rightMax(size), leftMax(size);
        
        findrightMax(rightMax, height);
        findleftMax(leftMax, height);
        
        
        int water=0;
        for(int i=0; i<size; i++){
            water+= min(rightMax[i], leftMax[i])- height[i];
        }
        
        return water;
    }
};
// ````````````````````Most optimised````````````````````````````
class Solution {
public:
    int trap(vector<int>& height) {
        int water=0;
        int leftMax=0, rightMax= 0, l= 0, r= height.size()-1;
        while(l<=r){
            if(height[l]<= height[r]){
                if(height[l] > leftMax) leftMax= height[l];
                else water+= leftMax- height[l];
                l++;
            }
            else{
                if(height[r] > rightMax) rightMax= height[r];
                else water+= rightMax- height[r];
                r--;
            }
        }
        return water;
    }
};
