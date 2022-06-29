class Solution
{
    public:
    //checks for one many relations. 
    bool check(string s, string t){
        unordered_map<char, char> mp;
        for(int i=0; i<s.size(); i++){
            if(mp.count(s[i])){
                if(t[i] != mp[s[i]]) return false;
            }
            else{
                mp[s[i]]= t[i];
            }
        }
        return true;
    }
    bool areIsomorphic(string s, string t)
    {

        if(s.length()!= t.length()) return false;
        // for many one relation, we need to pass the reverse string. 
        // eg : pijy, fulf
        return check(s, t) && check(t, s);
        
    }
};
