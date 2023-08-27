#include<bits/stdc++.h>

using namespace std;
int main()
{
    long long int a,b[100000],n,c,d,i;
    for(i=0;cin>>n;i++)
    {
        b[i]=n;

        sort(b,b+i+1);
        d=i+1;
        if(d%2==0)
        {
            a=b[i/2]+b[(i/2)+1];
            cout<<a/2<<endl;
        }
        else
        {
            cout<<b[i/2]<<endl;
        }
    }
    return 0;

}
