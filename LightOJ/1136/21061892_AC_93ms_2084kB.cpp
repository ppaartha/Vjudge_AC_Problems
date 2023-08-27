#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i;
    cin>>t;
    for(i=1;i<=t;++i)
    {
        unsigned long long int a,b,x,y,z;
        cin>>a>>b;
        if(b%3==2)
        {
            y=((b/3)*2)+1;
        }
        else
        {
            y=(b/3)*2;
        }
        x=a-1;
        if(x%3==2)
        {
            z=((x/3)*2)+1;
        }
        else
        {
            z=(x/3)*2;
        }
        cout<<"Case "<<i<<": "<<y-z<<endl;

    }
    return 0;
}
