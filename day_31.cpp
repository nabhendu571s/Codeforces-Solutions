#include<bits/stdc++.h>
#define in cin
#define out cout
#define ll long long
#define ii int
using namespace std;
#define si signed
#define rt return
#define l endl
ii display()
{
    ii n, a, count(0),count1(0),count2(-1);
    in >> n;
    while (n--)
    {
        in >> a;
        if (a == 1)
        {
            count += 1;
            if (count1> 0)
            {
                count1 -= 1;
            }
        }
        else
        {
            count1+= 1;
            if (count1 > count2)
            {
                count2 = count1;
            }
        }
    }
    out<<count+count2<<l;
}
si main(){
  ii t=1;
  while(t--){
    display();
  }
  rt 0;
}