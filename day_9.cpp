#include<bits/stdc++.h>
using namespace std;
void display(){
   string s;
   cin>>s;
   int n=s.size();
   int res=(int(s[0]-48)-1)*10;
   if(n==1){
    res+=1;
   }else if(n==2){
    res+=3;
   }else if(n==3){
    res+=6;
   }else{
    res+=10;
   }
   cout<<res<<endl;
}
signed main(){
    int t;
    cin>>t;
    while(t--){
        display();
    }
    return 0;
}