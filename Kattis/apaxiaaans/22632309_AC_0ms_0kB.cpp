#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int l,k=0,j,i;
    l=s.size();
    for(i=0; i<l; i++)
    {
        cout<<s[i];
        j=i;
        while(s[j]==s[i])
        {
            j++;

        }
        i=j-1;
    }

    cout<<endl;
    return 0;

}
