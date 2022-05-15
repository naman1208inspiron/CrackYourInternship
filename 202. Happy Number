class Solution {
public:
    bool isHappy(int n) {
        unordered_set<int> mp;
        while(n!=1){
            if(mp.find(n)==mp.end()){
                mp.insert(n);
            }
            else return false;
            int num=0;
            while(n){
                num+= pow(n%10, 2);
                n/=10;
            }
            n=num;
            
        }
        return true;
    }
};
