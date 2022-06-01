class Solution
{
    public:
    bool static cmp(pair<int,int>a, pair<int, int>b){
        return a.second<b.second;
    }
    int maxMeetings(int start[], int end[], int n)
    {
        vector<pair<int, int>> v;
        for(int i=0; i<n; i++){
            v.push_back({start[i], end[i]});
        }
        //we need to sort the vector acc to the finish time
        // cuz the sooner one meeting will end, the sooner other will start
        sort(v.begin(), v.end(), cmp);
        int meet=1;
        int limit= v[0].second;
        for(int i=1; i<n; i++){
            if(v[i].first> limit){
                meet++;
                limit= v[i].second;
            }
        }
        return meet;
    }
};

//APPROACH 2--> 
class Solution
{
    public:
    //Function to find the maximum number of meetings that can
    //be performed in a meeting room.
    bool cmp(pair<int,int>&a, pair<int, int>&b){
        return a.second<b.second;
    }
    int maxMeetings(int start[], int end[], int n)
    {
        vector<pair<int, int>> v;
        for(int i=0; i<n; i++){
            v.push_back({ end[i], start[i]});
        }
        //we need to sort the vector acc to the finish time
        // cuz the sooner one meeting will end, the sooner other will start
        sort(v.begin(), v.end());
        int meet=1;
        int prev= v[0].first;
        for(int i=1; i<n; i++){
            if(v[i].second> prev) {
                meet++;
                prev= v[i].first;
            }
        }
        return meet;
    }
};
