class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        vector<int> ans;
        deque<int> dq; // it will store the numbers in decresing order. 
        for(int i=0; i< nums.size(); i++){
            // if the front index is the outgoing index then-->  
            if(!dq.empty() && i>=k &&  nums[i-k] == dq.front()) dq.pop_front();
            
            // remove all the smaller elements than the incoming element
            // start from back as the smallest no. would be found there.
            while(!dq.empty() && dq.back() < nums[i]) dq.pop_back();
            
            dq.push_back(nums[i]);
            //push the front element as it would be the largest element in the present window as all the unnecessay (out of bound and the smaller) have been removed earlier only
            // start pushing only when you have reached kth element(if condition)
            if(i>= k-1) ans.push_back(dq.front());
        }
        return ans;
    }
};
