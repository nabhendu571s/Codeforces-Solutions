#include<bits/stdc++.h>
using namespace std;
#define st string
#define ll long long
#define pb push_back
#define mp make_pair
#define ii int
#define in cin
#define out cout
#define r return 
#define l endl
#define e "\n"
#define all(x) (x).begin(), (x).end()
#define v vector
#define vi vector<int>
#define si signed 
#define ch char
int display(const st& s){
    ii time = 2; 
    for (ii i = 1; i < s.length();i++){
        if (s[i] == s[i - 1]){
            time += 1;
        } else {
            time += 2;
        }
    }
    return time;
}
si main() {
    ii t;
    in>>t;
    while(t--){
        st s,pass = "";
        in>>s;
        ii max1 = -1;
        for(ii i=0;i<= s.length();i++){
            for(ch j = 'a';j<='z';j++){
                st npass = s.substr(0, i) +j+ s.substr(i);
                ii n = display(npass);
                if(n>max1) {
                    max1 = n;
                    pass = npass;
                }
            }
        }
        cout<<pass<< endl;
    }
    return 0;
}