#include<bits\stdc++.h>
using namespace std;
void pattern(int n ,int a,int b,int c){
    if(b>n) return;
    else if(c>b){
        cout<<endl;
        pattern(n,1,b+1,1);
    }
    else if(a>b){

        pattern(n,1,b,c+1);
        
    }
    
    
    else {
        cout<<a;
        pattern(n,a+1,b,c);
}
}
int main(){
    int n;
    cin>>n;
    pattern(n,1,1,1);
    return 0;
    
}