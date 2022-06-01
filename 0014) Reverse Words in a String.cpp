class Solution {
public:
    string reverseWords(string s) {
        bool charFound=false, inserted= false;;
        string ans= "", temp="";
        for(int i=0; i<s.size(); i++){
          // if continuous spaces found or spaces found at the begining of the string ==> move on
            if((i!=0 && s[i]==' ' && s[i-1]==' ') || (s[i]==' '&& !charFound) ) continue;
            if(s[i]==' '){
                inserted= true;
                if(ans.empty()){
                    ans= temp+ ans;
                }
                else{
                    ans= temp+" "+ ans;
                }
                temp= "";
            }
            else{
                charFound= true;
                temp+= s[i];
            }
        }
        if(!inserted) ans= temp;
      // below, we are taking care of the extra spaces at the end of the string. 
        else if(s[s.size()-1] != ' ') ans= temp+" "+ ans;
        return ans;
    }
};
