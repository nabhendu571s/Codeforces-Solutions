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
#define v vector
#define p pair
#define st string
ii display(){
ii n,s,count,i;
in>>n>>s;
st a,b;
if(s==0){
    out<<(n==1? "0 0":"-1 -1")<<l;
    r 0;
}
for(i=0;i<n;i++){
    count=min(s,9);
    b+=count+'0';
    s-=count;
}
if(s>0){
    out<<"-1 -1"<<l;
    r 0;
}
for(i=n-1;i>=0;i--)
    a+=b[i];
for(i=0;a[i]=='0';i++);
    a[i]--,a[0]++;
 out<<a<<" "<<b<<l;
    r 0;
}
si main(){
    ii t=1;
    while(t--){
        display();
    }
    r 0;
}