#include<bits/stdc++.h>
using namespace std;
int display(int n){
if(n%4==0){
    return n/4;
}else{
    return n/4+1;
}
}
signed main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int res=display(n);
        cout<<res<<endl;
    }
    return 0;
}