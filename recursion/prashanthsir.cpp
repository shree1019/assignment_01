#include<bits/stdc++.h>
using namespace std;
void duplicate(vector<int> &arr,int n){
    int check = arr[0];
    for(int i = 1;i<n;i++){
        if(arr[i]==check) arr[i]*=-1;
        else check = arr[i];
    }
}
int main(){
    int n;
    cin>>n;
    vector<int> arr;
    for(int i= 0;i<n;i++){
        int t;
        cin>>t;
        arr.push_back(t);
    }
    duplicate(arr,n);
    for(int i = 0;i<n;i++) cout<<arr[i];
    return 0;
}