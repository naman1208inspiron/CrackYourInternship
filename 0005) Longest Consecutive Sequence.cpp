class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> s;
        for(int it: nums){
            s.insert(it);
        }
    
        int longestStreak=0;
        
        for(int it: nums){
            if(s.find(it-1)==s.end()){
                int currStreak=1;
                while(s.find(++it)!=s.end()) currStreak++;
                longestStreak= max(longestStreak, currStreak);
            }
        }
        
        return longestStreak;
    }
};
