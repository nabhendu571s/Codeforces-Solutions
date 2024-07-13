#include<bits/stdc++.h>
using namespace std;
using ll        = long long;
using ld        = long double;
const ll mod    = 1e9 + 7;
const ll N      = 1e5 + 10;
const ll inf    = 1e9;
const ll linf   = 1e18;
#define int long long
void display(){
   long long n,sum;
   cin>>n>>sum;
   vector<int>v(n);
   for(int i=0;i<v.size();i++){
    cin>>v[i];
     sum-=(v[i]*v[i]);
   }
   sum/=(4*n);
   long long res=accumulate(v.begin(),v.end(),0LL);
   res/=2*n;
   cout<<(ll)sqrtl(res*res+sum)-res<<endl;
}
signed main(){
    int t;
    cin>>t;
    while(t--){
        display();
    }
    return 0;
}