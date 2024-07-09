#include<bits/stdc++.h>
using namespace std;
bool display(){
    int n,m,sum=0,count=0,res;
    cin>>n;
    int v[n],vc[n];
    for(int i=0;i<n;i++){
        cin>>v[i];
        sum+=v[i];
        vc[i]=sum;
    }
    cin>>m;
    int v1[m];  
    for(int i=0;i<m;i++){
        cin>>v1[i];
    }
    for(int s=0;s<m;s++){
        cout<<lower_bound(vc,vc+n,v1[s])-vc+1<<endl;
    }
}
int main(){
   int t=1;
   while(t--){
    display();
   }
   return 0;
}