#include<bits/stdc++.h>
using namespace std;
void display(){
   int n;
   cin>>n;
   int a;
   map<int,long long>v;
   long long sum=0;
   for(int i=0;i<n;i++){
    cin>>a;
    sum+=v[a-i];
    v[a-i]++;
   }
   cout<<sum<<endl;
}
signed main(){
    int t;
    cin>>t;
    while(t--){
        display();
    }
    return 0;
}