#include<bits/stdc++.h>
using namespace std;
void display( string  s){
   for(auto& d:s){
    if(d>'4')
    d='9'-d+'0';
   }
   if(s.front()=='0') s.front()='9';
   cout<<s<<endl;
}
signed main(){
    int t=1;
    while(t--){
        string s;
        cin>>s;
        display(s);
    }
    return 0;
}