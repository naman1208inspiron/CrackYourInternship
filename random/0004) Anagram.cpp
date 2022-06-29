// silent and listen are anagram --> rearrangement of characters. 

//`````````````Method 1`````````````
// ---> sort and compare

//`````````````Method 2``````````````
// ---> Compare hash Maps 
class Solution
{
    public:
    //Function is to check whether two strings are anagram of each other or not.
    bool isAnagram(string a, string b){
        
        if(a.size()!= b.size()) return false;
        
        unordered_map<char, int> aa, bb;
        for(char it: a) aa[it]++;
        for(char it: b) bb[it]++;
        
        return aa==bb;
    }
};
// ````````````````Method 3``````````````````
// ---> using array 
class Solution
{
    public:
    //Function is to check whether two strings are anagram of each other or not.
    bool isAnagram(string a, string b){
        
        if(a.size()!= b.size()) return false;
        vector<int> aa(26, 0), bb(26, 0);
        
        for(int i=0; i<a.size(); i++){
            aa[a[i]-'a']++;
            bb[b[i]-'a']++;
        }
        
        for(int i=0; i<26; i++){
            if(aa[i]!= bb[i]) return false;
        }
        return true;
        
    }

};
