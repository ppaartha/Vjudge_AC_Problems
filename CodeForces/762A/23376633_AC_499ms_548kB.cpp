#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,k,i,p=0,m;
    vector<long long int>v;
    cin>>n>>k;
    for(i=1; i<=sqrt(n); ++i)
    {
        if(n%i==0)
        {
            m=n/i;
            if(i==m)
            {
                v.push_back(i);
                p++;
            }
            else
            {

                v.push_back(i);
                v.push_back(m);
                p=p+2;
            }

        }
    }
    sort(v.begin(),v.end());
    if(k>p)
    {
        cout<<"-1"<<endl;
    }
    else
    {
        cout<<v[k-1]<<endl;
    }
    return 0;
}
