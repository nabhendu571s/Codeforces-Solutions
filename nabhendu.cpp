#include <bits/stdc++.h>
using namespace std;
bool v[1000001];
bool display(){
for(long long i=2;i<=1000000;i++){
  if(v[i]==0){
    for(long long j=2*i;j<=1000000;j+=i)
    v[j]=1;
  }
}
}
signed main(){
  long long t=1;
  while(t--){
    long long n;
    display();
    cin>>n;
    for(long long i=4;i<=n-4;i++){
      if(v[i]==1&&v[n-i]==1){
        cout<<i<<" "<<n-i<<endl;
        break;
      }
    }
  }
  return 0;
}
