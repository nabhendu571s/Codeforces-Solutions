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
const ii n = 2 * 1e5 + 1;
vc<int>v(n+ 1, -1);
ii display(ii x) {
    if(x == 0) 
    return 0;
    if(v[x] != -1) 
    return v[x];
    v[x] = 1 + display(x / 3);
    return v[x];
}
si main(){
    ii t;
    in>>t;
    for(ii i = n; i >=0; i--) {
        display(i);
    }
    while (t--){
        ii s,p;
        in>>s>>p;
        ii res = v[s] * 2;
        for (ii i = s+ 1; i <= p; ++i){
            res += v[i];
        }
        out<<res<< endl;
    }
    rt 0;
}
