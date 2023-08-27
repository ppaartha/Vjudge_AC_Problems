#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    while(cin>>n)
    {
        if(n==0)
        {
            return 0;
        }
        int i,c=0,p=0;
        vector<int>v;
        while(n!=0)
        {
            v.push_back(n%2);
            n=n/2;
        }
        for(i=0; i<v.size(); i++)
        {
            if(v[i]==1)
            {
                c++;
            }
        }
        reverse(v.begin(),v.end());
        cout<<"The parity of ";
        for(int i=0; i<v.size(); i++)
        {
            cout<<v[i];
        }

        cout<<" is "<<c<<" (mod 2)."<<endl;

    }

}
