class Solution {
public:
    string addBinary(string a, string b) {
        string ans="";
        int i= a.size()-1;
        int j= b.size()-1;
        int carry=0;
        while(i>=0 || j>=0){
            int sum= carry;
            if(i>=0) sum+= a[i--]-'0';
            if(j>=0) sum+= b[j--]-'0';
            
            if(sum>1) carry=1;
            else carry=0;
            
            ans+= to_string(sum%2);
        }
        if(carry){
            ans+= to_string(carry);
        }
        reverse(ans.begin(), ans.end());
        return ans;
        
        
// NAIVE APPROACH  ==>
        
// 		string ans="";
//         reverse(a.begin(), a.end());
//         reverse(b.begin(), b.end());
        
//         int l1= a.size(), l2= b.size();
//         // adding zeros at the last
        
//         for(int i=abs(l2-l1); i>0; i--){
//             if(l1<l2){
//                 a+='0';
//             }
//             else{
//                 b+='0';
//             }
//         }
        
//         bool carry= false;
//         for(int i=0; i<max(l2,l1); i++){
//             if(carry){
//                 if(a[i]=='1' && b[i]=='0' || a[i]=='0' && b[i]=='1'){
//                     ans+='0';
//                     carry=true;
//                 }
//                 else if(a[i]=='0' && b[i]=='0'){
//                     ans+='1';
//                     carry=false;
//                 }
//                 else if(a[i]=='1' && b[i]=='1'){
//                     ans+='1';
//                     carry=true;
//                 }
//             }
//             else{
//                 if(a[i]=='1' && b[i]=='0' || a[i]=='0' && b[i]=='1'){
//                     ans+='1';
//                     carry=false;
//                 }
//                 else if(a[i]=='0' && b[i]=='0'){
//                     ans+='0';
//                     carry=false;
//                 }
//                 else if(a[i]=='1' && b[i]=='1'){
//                     ans+='0';
//                     carry=true;
//                 }
//             }
//         }
//         if(carry) ans+='1';
//         reverse(ans.begin(), ans.end());
//         return ans;
        
    }
};
