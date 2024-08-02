#include<bits/stdc++.h>
using namespace std;
void display(long long int n ,long long int s){
   if(n%2==s%2){
    if(s*s>n){
    cout<<"NO"<<endl;
   }else{
    cout<<"YES"<<endl;
   }
   }else{
    cout<<"NO"<<endl;
   }
}
int main(){
    long long int t;
    cin>>t;
    while(t--){
        long long int  n,s;
        cin>>n>>s;
        display(n,s);
    }
    return 0;
}