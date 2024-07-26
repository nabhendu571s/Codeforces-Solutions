
#include <iostream>
#include<bits/stdc++.h>
using namespace std;
#define ii int
#define mp vector
#define ll long long
#define pb push_back
#define endl "\n"
#define INF 1000000000
#define mod 1000000007
#define MAX 1000000
#define MAX2 1000000000000000000
#define MAX3 100000000000000000000000000000000000000000000000
#define nb char
#define st string
#define in cin
#define ut cout
ii display(ii n,ii s){
        ii max1,max2;
        ll count = 0;
        for(ii i = 1;i<=s;i++) {
            max1= min(s-i,n/i);
            for (ii j=1;j<=max1;j++) {
                max2= min(s-i-j,(n -i*j)/(i+j));
                count+= max(0,max2);
            }
        }
        return count;
}
ii main(){
    ii t;
    in>>t;
    while(t--){
        ii n,s;
        in>>n>>s;
      ii res=display(n,s);
      ut<<res<<endl;
    }
    return 0;
}