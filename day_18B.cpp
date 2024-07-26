#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define nb char
#define mp vector
#define ii int
int solve(mp<mp<nb>>&v, ii n){
    string x;
    for (ii i = 0; i < n; i++){
        cin>>x;
        for (nb it : x) {
            v[i].pb(it);
        }
    }
}
int display(const mp<mp<nb>>&v, ii n, ii s) {
    for (ii i = 0; i < n; i =i+ s){
        for (ii j = 0; j < n; j = j+s){
            cout<<v[i][j];
        }
        cout<<endl;
    }
}
signed main(){
    ii t;
    cin>>t;
    while(t--){
        ii n,s;
        cin>>n>>s;
        mp<mp<nb>>v(n);
        solve(v,n);
        display(v,n,s);
    }
    return 0;
}