#include<bits/stdc++.h>
using namespace std;
#define in cin
#define out cout
#define ii int
#define ll long long int
#define pb push_back
#define mp make_pair
#define si signed
#define ui unsigned
#define l endl
#define r return 
ii display(){
  ii n,s,p;
  in>>n>>s>>p;
  vector<pair<ii, ii>> v(n);
        for (ii i = 0; i < n;i++){
            in>>v[i].first>>v[i].second;
        }
        bool count = false;
        if (v[0].first >= s){
            count = true;
        }
        for(int i=1;i<n;i++){
            if (v[i].first - v[i-1].second>=s){
                count = true;
            }
        }
        if(p -v[n-1].second >= s){
            count = true;
        }
        if(count) {
            out<<"YES"<<l;
        }else{
            out<<"NO"<<l;
        }
}
si main(){
    ii t;
    in>>t;
    while(t--){
        display();
    }
    r 0;
}