#include<bits/stdc++.h>
using namespace std;
void pattern(int n,int a,int b){
    if(n<0) return;
    int c = max(n,a);
    int d = abs(n-a);
    if(b<=d){
        cout<<" ";
        pattern(n,a,b+1);
    }
    else{
        if(b<=c){
            cout<<"*";
            if(b+1<=c) cout<<"*";
            pattern(n,a,b+1);
        }
        else if(n>a){
            cout<<endl;
            pattern(n,a+1,1);
        }
        else{
            cout<<endl;
            pattern(n-1,a,1);
        }
    }

}
int main(){
    int n;
    cin>>n;
    pattern(n,1,1);
    return 0;
}