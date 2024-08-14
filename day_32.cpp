#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ii int
#define in cin
#define out cout
#define si signed 
#define rt return 
#define pb push_back
#define l endl
ii display(){
  ii n,s;
  in>>n;
  ii count=0,count1=0,count2=0;
  for(ii i=0;i<n;i++){
    in>>s;
    count+=s;
  }
  for(ii i=0;i<n-1;i++){
    in>>s;
    count1+=s;
  }
  for(ii i=0;i<n-2;i++){
    in>>s;
    count2+=s;
  }
  out<<count-count1<<l;
  out<<count1-count2<<l;
}
si main(){
    ii t=1;
    while(t--){
        display();
    }
    rt 0;
}