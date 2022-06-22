//```````````````coding ninjas```````````````
#include <bits/stdc++.h>
void merge(long long *arr, long long l, long long mid, long long r, long long &ans){
    long long n1= mid-l+1;// the size of 1st tmp array
    long long n2= r-mid;// the size of 2nd tmp array
  
    long long tmp1[n1], tmp2[n2];
    for(long long i=0; i<n1; i++) tmp1[i]= arr[l+i];
    for(long long i=0; i<n2; i++) tmp2[i]= arr[mid+1+i];
  
    long long p1=0, p2=0, k=l;// p1 points to tmp1, p2 to tmp2
    while(p1<n1 && p2<n2){
        if(tmp1[p1]<=tmp2[p2]){
            arr[k++]= tmp1[p1++];
        }
        else{
            arr[k++]= tmp2[p2++];
            // all the elements from index p1---->n1-1 will be included. 
            ans+= n1-p1;
        }
    }
  
    while(p1<n1) arr[k++]= tmp1[p1++];
    while(p2<n2) arr[k++]= tmp2[p2++];
}

void mergeSort(long long *arr, int l, int r, long long &ans){
    if(l>=r) return;
    long long mid= l+ (r-l)/2;
  
    mergeSort(arr, l, mid, ans);
    mergeSort(arr, mid+1, r, ans);
  
    merge(arr, l, mid, r, ans);
}

long long getInversions(long long *arr, int n){
    long long ans=0;
    mergeSort(arr, 0, n-1, ans);
    return ans;
}

