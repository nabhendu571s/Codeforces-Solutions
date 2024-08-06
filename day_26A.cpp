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
ii display(ii n){
  ii ans=n%10;
  return ans+(n/10);
}
si main(){
    ii t;
    in>>t;
    while(t--){
        ii n;
        in>>n;
       ii res= display(n);
       out<<res<<l;
    }
    return 0;
}