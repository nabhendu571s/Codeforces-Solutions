#include<bits/stdc++.h>
using namespace std;
#define in cin
#define out cout
#define ll long long
#define pb push_back
#define mp make_pair
#define all(x) (x).begin(), (x).end()
#define ii int
#define si signed 
#define st string
#define rt return 
#define l endl
ii display(){
  ii n,s,count(0);
    in>>n>>s;
    while(n!=s)
    {
        if (s>n)
            if (s % 2 == 0) s /= 2, count++;
            else s++, count++;
        else if (n > s) s++, count++;
    }
    out<<count<<endl;
}
si main(){
    ii t=1;
    while(t--){
        display();
    }
    rt 0;
}