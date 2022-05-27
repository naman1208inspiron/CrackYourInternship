class Solution
{
    public:
    bool static cmp(Item a, Item b){
        return (double)a.value/(double)a.weight > (double)b.value/(double)b.weight;
    }
    double fractionalKnapsack(int W, Item arr[], int n)
    {
        sort(arr, arr+n, cmp);
        double profit=0;
        for(int i=0; i<n; i++){
            double ValPerWt= (double)arr[i].value / (double)arr[i].weight;
            profit+= min(W, arr[i].weight)* ValPerWt;
            W-= arr[i].weight;
            if(W<0) break;
        }
        return profit;
    }
        
};
