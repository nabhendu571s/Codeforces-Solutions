#include<bits/stdc++.h>
using namespace std;
void display(long long n){
  long long rem=n%2020;
  long long div=n/2020;
  if(rem<=div){
    cout<<"YES"<<endl;
  }else{
    cout<<"NO"<<endl;
  }
}
signed main(){
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        display(n);
    }
    return 0;
}