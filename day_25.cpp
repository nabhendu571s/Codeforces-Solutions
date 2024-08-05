/*--------->03/08/2024---------->ns<------------*/
#include<bits/stdc++.h>
using namespace std;
void display(){
  int n,s,count=0;
  cin>>n>>s;
   for (int i = 1; i <= n; i++)
        if (s % i == 0 && s/ i <= n) count++;
        cout<<count<<endl;
}
int main(){
    int t=1;
    while(t--){
        display();
    }
    return 0;
}