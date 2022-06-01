class Solution {
public:
    string convertToTitle(int n) {
        
//         string tmp="";
//         while(n>=1){
//             int rem= n%26;
           
//             if(rem==0) tmp+='Z';
//             else tmp+= rem+'A'-1;
//             if(n==26) break;
//             n/=26;
//         }
//         reverse(tmp.begin(), tmp.end());
//         return tmp;
        
        string tmp="";
        while(n>0){
            n--;
            int rem= n%26;
            tmp+= 'A'+rem;
            n/=26;
        }
        reverse(tmp.begin(), tmp.end());
        return tmp;
    }
};
