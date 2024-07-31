#include<bits/stdc++.h>
#define ll              long long
#define ull             unsigned long long
#define pb              push_back
using namespace std;
void display(){
    ll x,y,a,b;
        cin>>x>>y>>a>>b;
        if(x > y){
            swap(x,y);
        }
        ll ans1 = 0, ans2 = 0;
        ans1 = x*a + y*a;
        ll z = y - x;
        ans2 = z*a + x * b;
        cout<<min(ans1,ans2)<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        display();
    }
    return 0;
}