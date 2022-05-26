bool canPlace(int diff, vector<int> &nums, int c){
    int prev= nums[0];
    c--;
    for(int i=1; i<nums.size(); i++){
        if(nums[i]>= prev+diff){
            prev= nums[i];
            c--;
            if(c==0) return true;
        }
        
    }
    if(c>0) return false;
    return true;
}

int main(){
    int t; cin>>t;
    while(t--){
        int n, c; cin>>n>>c;
        vector<int> stalls(n);
        for(int i=0; i<n; i++){
            cin>>stalls[i];
        }
        sort(stalls.begin(), stalls.end());
        int low= 1, high= stalls[n-1]-stalls[0], mid, res;
        while(low<=high){
            mid= (low+high)>>1;
            if(canPlace(mid, stalls, c)){
                res= mid;
                low= mid+1;
            }
            else{
                high= mid-1;
            }
        }
        cout<<res<<endl;
    }

    return 0;
}
