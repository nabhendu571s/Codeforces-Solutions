#include<bits/stdc++.h>
using namespace std;
#define ll long long int
void display(){
  ll i,j,k;
        ll n,x=8,y=8;
        cin>>n;
        if(n==0)
        {
            cout<<"1"<<endl;
            return;
        }
        if(n%4==0){
            cout<<"6"<<endl;
        }
        else if(n%4==1){
            cout<<"8"<<endl;
        }else if(n%4==2){
            cout<<"4"<<endl;
         } else if(n%4==3){
            cout<<"2"<<endl;
         }
}
int main(){
    int t=1;
    while(t--){
        display();
    }
    return 0;
}