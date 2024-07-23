#include<bits/stdc++.h>
using namespace std;
void display(){
   int n,s;
    cin>>n>>s;
int ans = 0;
int count = 1;
while(s> 0){
if (count == 1){
      s -= n;
    }else{
       if(s > n - count + 1){
ans ++;
s = s - 2 * (n - count + 1);
}
else{
s -= n - count + 1;
}
}
ans++;
count++;
}
cout<<ans<<endl;
}
signed main(){
    int t;
    cin>>t;
    while(t--){
        display();
    }
    return 0;
}