#include<bits/stdc++.h>
using namespace std;
bool display(){
   int n;
   cin>>n;
   map<int,int>m;
   vector<int>v;
   for(int i=0;i<n;i++){
    int s,j;
    cin>>s>>j;
    m[s]=j;
    v.push_back(s);
   }
   sort(v.begin(),v.end());
   bool count=0;
   for(int i=0;i<n-1;i++){
    if(m[v[i]]>m[v[i+1]])
    count=1;
   }
   if(count){
    cout<<"Happy Alex"<<endl;
   }else{
    cout<<"Poor Alex"<<endl;
   }
}
signed main(){
    int t=1;
    while(t--){
        display();
    }
    return 0;
}