#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define vi vector<int>
#define mod 1000000007
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
ii display(){
     st n,s;
    in>>n>>s;
    ii count=0;
     for(ii i=0;i<n.size();i++){
    if(count>=s.size()){
        break;
    }
    if(n[i]==s[count]){
        count++;
        continue;
    }
    if(n[i]=='?'){
    n[i]=s[count];
    count++;
    continue;
    }
    }
    for(ii i=0;i<n.size();i++){
     if(n[i]=='?'){
        n[i]='a';
    }
   }
 if(count>=s.size()){
    out<<"YES"<<l;
    out<<n<<l;
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
    rt 0;
}