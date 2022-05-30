class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& findNums, vector<int>& nums2) {
        unordered_map<int, int>mp;
        vector<int> ans;
        
        // finding the nxt grtr element for the whole nums2
        findNGE(nums2, mp);// TC ->O(n2)
        
        // now checking the occurance of findNums elements in nums2
        for(int i=0; i<findNums.size(); i++){
            ans.push_back(mp[findNums[i]]);
        }
        
        return ans;
    }
    
    void findNGE(vector<int> nums, unordered_map<int, int>&mp){
        stack<int> st;
        for(int i=nums.size()-1; i>=0; i--){
            while(!st.empty() && st.top()<=nums[i]) st.pop();
            if(st.empty()){
                mp[nums[i]]=-1;
            }
            else{
                mp[nums[i]]= st.top();
            }
            st.push(nums[i]);
            nums
        }
    }
};
