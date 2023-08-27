#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i;
    cin>>t;
    for(i=1; i<=t; ++i)
    {
        string a;
        long long int b,s=0;
        int j;
        cin>>a>>b;
        if(b<0)
        {
            b=b*(-1);
        }
        if(a[0]=='-')
        {

            for(j=1;j<a.size(); ++j)
            {
                s=(s*10)+(a[j]-'0');
                s=s%b;
            }
        }

        else
        {
            for(j=0;j<a.size(); ++j)
            {
                s=(s*10)+(a[j]-'0');
                s=s%b;
            }
        }

        if(s==0)
        {
            cout<<"Case "<<i<<": divisible"<<endl;
        }
        else
        {
            cout<<"Case "<<i<<": not divisible"<<endl;
        }

    }
    return 0;
}
