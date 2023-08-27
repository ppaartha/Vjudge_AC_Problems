#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,j=1;
    cin>>t;
    while(t--)
    {
        long long int n,w,i,mov=1,s;

        cin>>n>>w;
        long long int x[n+10],y[n+10],a[n+10];
        for(i=0;i<n;i++)
        {
            cin>>x[i]>>y[i];
            a[i]=y[i];
        }
        sort(a,a+n);
        s=a[0]+w;
        for(i=1;i<n;i++)
        {
            if(a[i]>s)
            {
                mov++;
                s=a[i]+w;
            }

        }
        cout<<"Case "<<j<<": "<<mov<<endl;
        j++;
    }
}
