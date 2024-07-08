#include<bits/stdc++.h>
using namespace std;
bool display(){
     long long n;
     cin>>n;
     int sum=1,count=1;
     while(1){
        sum+=pow(2,count++);
        if(n%sum==0){
            cout<<n/sum<<endl;
            break;
        }
     }
}
signed main(){
   int t;
   cin>>t;
   while(t--){
    display();
   }
   return 0;
}