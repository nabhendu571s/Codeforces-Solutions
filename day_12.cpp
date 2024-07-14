#include<bits/stdc++.h>
using namespace std;
void display(){
  int n,s,sum,num;
  cin>>n>>s;
  int total=n;
  while(n>=s){
     sum=n/s;
     total+=sum;
     num=n%s;
     n=sum+num;
  }
  cout<<total<<endl;
}
signed main(){
    int t=1;
    while(t--){
        display();
    }
    return 0;
}