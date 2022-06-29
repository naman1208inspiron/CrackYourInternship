class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        reverse(digits.begin(), digits.end());
        int i=0, carry=0;
        
        while(i < digits.size()){
            int n= digits[i]+1;
            
            digits[i]= n%10;
            carry= n/10;
            
            i++;
            if(carry==0) break;
        }
        if(carry){
            digits.push_back(carry);
        }
        reverse(digits.begin(), digits.end());
        return digits;
    }
};


