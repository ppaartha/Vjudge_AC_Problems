#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        int a1,a2,b1,b2,c1,c2,d1,d2,x,y,z,l;
       cin>>a1>>a2>>b1>>b2>>c1>>c2;
       d1=c1-b1+a1;
       d2=c2-b2+a2;
      x=(a1*b2+b1*c2+c1*d2+d1*a2)-(a2*b1+b2*c1+c2*d1+d2*a1);
       cout<<"Case "<<i<<": "<<d1<<" "<<d2<<" "<<abs(x/2)<<endl;

    }
    return 0;
}
