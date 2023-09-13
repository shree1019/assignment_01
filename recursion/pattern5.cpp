#include<bits\stdc++.h>
using namespace std;
void pattern(int n ,int a,int b){
    if(a>n) return;
    if(a<=b){
        cout<<b;
        pattern(n,a+1,b);
    }
    else{
        cout<<endl;
        pattern(n,1,b+1);
    }
}
int main(){
    int n;
    cin>>n;
    pattern(n,1,1);
    return 0;
}