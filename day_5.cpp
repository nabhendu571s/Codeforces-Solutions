#include<bits/stdc++.h>
using namespace std;
bool display(){
   int n,s,count=0,count2=0;
   cin>>n;
   for(int i=0;i<n;i++){
    cin>>s;
    if(s==1){
        count2++;
        count++;
    }else{
        count+=2;
    }
   }
   int res=0;
   if(count%2==0){
    res=count/2;
    if(res%2==0){
        cout<<"YES"<<endl;
    }else{
        if(count2){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
   }else{
    cout<<"NO"<<endl;
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