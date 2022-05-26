int Solution::books(vector<int> &A, int B) {

    if(B> A.size()) return -1;
    int low=0, high= 0, mid, res;
    for(int it: A){
        low= min(low, it);
        high+= it;
    }
    while(low<=high){
        mid= (low+ high)/2;
        if(isPossible(mid, A, B)){
            res= mid;
            high= mid-1;
        }
        else{
            low= mid+1;
        }
    }
    return low;
    // return res;
}
bool Solution::isPossible(int barrier, vector<int>&A, int B){
    int allocatedStu= 1, pages= 0;
    for(int it: A){
        if(it> barrier) return false;

        if(it+pages> barrier){
            allocatedStu++;
            pages=it;
            if(allocatedStu>B) return false;
        }
        else{
            pages+=it;
        }
    }
    if(allocatedStu<=B) return true;
    return false;
}
