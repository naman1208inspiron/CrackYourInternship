class Solution{
public:	
	
	bool hasArrayTwoCandidates(int arr[], int n, int x) {
	    unordered_map<int, int> mp;
	    for(int i=0; i<n; i++){
	        // first check in mp --> to avoid wa in duplicates. 
	        if(mp.count(x- arr[i])) return true;
	        mp[arr[i]]++;
	    }
	    return false;
	}
};
