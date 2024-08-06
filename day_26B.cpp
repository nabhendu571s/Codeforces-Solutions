#include <iostream>
#include <vector>
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
#define rt return 
#define vc vector
#define st string
ii display(ii n, ii s, ii p, ii k) {
    ii count= 0;
    vc<tuple<ii,ii ,ii,ii>>v = {
        make_tuple(n, p, s, k),
        make_tuple(n, k, s, p),
        make_tuple(s, p, n, k),
        make_tuple(s, k, n, p)
    };
    for (const auto& it : v){
        ii count1 = 0,count2 = 0;
        if (get<0>(it) > get<1>(it)){
            count1 += 1;
        } else if (get<0>(it) < get<1>(it)){
            count2 += 1;
        }
        if(get<2>(it) > get<3>(it)){
            count1 += 1;
        } else if (get<2>(it) < get<3>(it)){
            count2 += 1;
        }
        if(count1>count2){
            count+= 1;
        }
    }
    rt count;
}
si main(){
    ii t;
    in>>t;
    vector<ii> res;
    while(t--){
        ii n,s,p,k;
        in>>n>>s>>p>>k;
        res.pb(display(n,s,p,k));
    }
    for (const auto& lt : res) {
        out<<lt<<l;
    }
    rt 0;
}

