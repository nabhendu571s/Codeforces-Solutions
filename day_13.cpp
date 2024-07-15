#include<bits/stdc++.h>
using namespace std;
void display(){
  int n,s,p(0);
  cin>>n>>s;
  int v[n],vc[s];
  for(int i=0;i<n;i++)
    cin>>v[i];
  for(int i=0;i<s;i++)
    cin>>vc[i];
  sort(v,v+n);
  sort(vc,vc+s);
  for(int i=0;i<n;i++){
    for(int j=0;j<s;j++){
        if(abs(v[i]-vc[j])<2){
            vc[j]=1000;
            p++;
            break;
        }
    }
  }
  cout<<p<<endl;
}
signed main(){
    int t=1;
    while(t--){
        display();
    }
    return 0;
}