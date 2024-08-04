#include<bits/stdc++.h>
using namespace std;
void display(){
  int n,s,p;
  cin>>n>>s>>p;
  cout<<min(n-s,p+1)<<endl;
}
int main(){
    int t=1;
    while(t--){
        display();
    }
    return 0;
}