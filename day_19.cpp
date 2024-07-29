#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define in cin
#define out cout
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define pii pair<int,int>
#define vi vector<int>
#define vll vector<ll>
#define ii int
#define l endl
#define all(x) (x).begin(), (x).end()
#define e "\n"
#define si signed
#define r return 
ii display(){
  ll ii n,s;
  while(in>>n>>s){
    if(n==1&&s==10){
        out<<"-1"<<l;
    }else if(n>=2&&s==10){
        for(ii i=1;i<n;i++){
            out<<"1";
        }
        out<<"0"<<l;
    }else{
        for(ii i=1;i<=n;i++){
            out<<s;
        }
        cout<<l;
    }
  }
}
si main(){
    ii t=1;
    while(t--){
        display();
    }
    r 0;
}