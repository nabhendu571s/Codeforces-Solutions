#include<bits/stdc++.h>
using namespace std;
void display(){
  int n,s,a;
  cin>>n>>s;
  if(s>n){
    cout<<-1<<endl;
  }else{
    if(n%2==0){
     a=n/2;
    }else{
        a=(n/2)+1;
    }
    while(a%s!=0){
    a++;
    }
  }
  cout<<a<<endl;

}
signed main(){
    int t=1;
    while(t--){
        display();
    }
    return 0;
}