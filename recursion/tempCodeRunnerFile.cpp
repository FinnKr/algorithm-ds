#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mp make_pair
#define pb push_back



// void mergeSort(int arr[], int s, int e){
//     if(s>e){
//         return;
//     }

//     int mid = (s+e)/2;

//     mergeSort(arr,s,mid);
//     mergeSort(arr,mid+1,e);
//     merge(arr,s,e);
// }

int i=0;

bool comp(int a, int b){
    if(a<b){
        i++;
        // cout<<a<<" "<<b<<endl;
    }

    return a<b;
}

int main() {
    int t; cin>>t;
    vector<int> a;
    while(t--){
        i=0;
        int n; cin>>n;
        for(int i=0; i<n; i++) {
            int t; cin>>t;
            a.pb(t);
        }
        sort(a.begin(), a.end(),comp);
        cout<<i<<endl;
        a.clear();
    }
    return 0;
}