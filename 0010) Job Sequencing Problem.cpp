class Solution 
{
    public:
    bool static cmp(Job a, Job b){
        return a.profit > b.profit;
    }
    //Function to find the maximum profit and the number of jobs done.
    vector<int> JobScheduling(Job arr[], int n) 
    { 
        sort(arr, arr+n, cmp);
        vector<int> deadline(101, 0);
        int jobsDone= 0, profit=0;
        
        for(int i=0; i<n; i++){
            for(int j= arr[i].dead; j>0; j--){
                if(deadline[j]==0){
                    deadline[j]=1;
                    profit+= arr[i].profit;
                    jobsDone++;
                    break;
                }
            }
            
        }
        return {jobsDone, profit};
    } 
};
