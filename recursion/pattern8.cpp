#include<bits/stdc++.h>
using namespace std;
void pattern(int n,int a,int b){
    if(a>n) return;
    if(b<=n-a){
        cout<<" ";
        pattern(n,a,b+1);
    }
    else if(b>=n-a && b<=n){
        cout<<"*";
        if(b+1<=n) cout<<"*";
        pattern(n,a,b+1);
    }
    
    else{
        cout<<endl;
        pattern(n,a+1,1);
    }
}
int main(){
    int n;
    cin>>n;
    pattern(n,1,1);
}