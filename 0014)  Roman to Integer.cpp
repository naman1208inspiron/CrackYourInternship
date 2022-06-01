//naive idea
class Solution {
public:
    int romanToInt(string s) {
        int num=0;
        for(int i=0; i<s.size(); i++){
            if(s[i]=='I'){
                if(s[i+1]=='V') num+=4, i++;
                else if(s[i+1]=='X') num+= 9, i++;
                else num+= 1;
            }
            else if(s[i]=='X'){
                if(s[i+1]=='L') num+=40, i++;
                else if(s[i+1]=='C') num+= 90, i++;
                else num+= 10;
            }
            else if(s[i]=='C'){
                if(s[i+1]=='D') num+=400, i++;
                else if(s[i+1]=='M') num+= 900, i++;
                else num+= 100;
            }
            else if(s[i]=='V') num+=5;
            else if(s[i]=='L') num+=50;
            else if(s[i]=='D') num+=500;
            else if(s[i]=='M') num+=1000;
        }
        return num;
    }
};
// good approach
class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char, int>mp ={{'I', 1},
                                    {'V', 5},
                                    {'X', 10},
                                    {'L', 50},
                                    {'C', 100},
                                    {'D', 500},
                                    {'M', 1000}};
        // initialising num with the back value. 
        int num= mp[s.back()];
        
        //iterating from the back of the string
        for(int i=s.size()-2; i>=0; i--){
            
            // suppose the case of IV, currently the pointer i is at I
            // num would be containing 5, we need to make it 4, that's why subtr.
            if(mp[s[i]]< mp[s[i+1]]) num-= mp[s[i]];
            else num+= mp[s[i]];
        }
        return num;
    }
};
