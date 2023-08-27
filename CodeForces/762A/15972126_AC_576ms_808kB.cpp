#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main()
{
    vector<long long int>d;
    long long int i,n,k,c=0,l;
    cin>>n>>k;

    for(i=1; i<=sqrt(n); i++)
    {
        if(n%i==0)
        {
            l=n/i;
            if((l*l)!=n)
            {
                d.push_back(l);
                c++;
            }

                d.push_back(i);
                c++;
        }
    }
    sort(d.begin(),d.end());

    if(k>c)

        cout<<-1<<endl;
    else
        cout<<d[k-1]<<endl;


}
