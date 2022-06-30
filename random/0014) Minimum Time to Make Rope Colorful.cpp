// idea--> when duplicates(same consecutive colors) are found, start adding their time and keep track of their max time. subtract max time from the total sum of time of duplicates and add to the answer. we will only keep the duplicate with maximum time. 
class Solution {
public:
    int minCost(string colors, vector<int>& time) {
        int n= time.size();
        
        int lo= 0, hi, mini=0;
        while(lo< n){
            int currMax= 0;
            int tsum=0;
            hi = lo;
            // in case of unique elements --> tsum and currMax will be same--> so adding 0. 
            while(hi<n && colors[lo]== colors[hi]){
                tsum+= time[hi];
                currMax= max(currMax, time[hi]);
                hi++;
            }
            
            mini+= tsum-currMax;
            // putting lo to the unique character, where hi is already present. 
            lo= hi; 
        }
        return mini;
    }
};
