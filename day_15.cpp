#include<bits/stdc++.h>
using namespace std;
void display(){
   int n;
   cin>>n;
   if(360%(180-n)==0){
    cout<<"YES\n";
   }else{
    cout<<"NO\n";
   }
}
signed main(){
    int t;
    cin>>t;
    while(t--){
        display();
    }
    return 0;
}