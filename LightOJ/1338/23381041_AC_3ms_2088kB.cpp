#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,k=1;
    cin>>t;
    getchar();

    while(t--)
    {
        string s1,s2;
        getline(cin,s1);
        getline(cin,s2);
        int i,p=0,l=0,j;
        for(i=0; i<s1.size(); i++)
        {
            if(s1[i]>='A'&&s1[i]<='Z')
            {
                s1[i]=tolower(s1[i]);
            }
            if(s1[i]!=' ')
            {
                p+=s1[i];
            }

        }
        for(j=0; j<s2.size(); j++)
        {
            s2[j]=tolower(s2[j]);

            if(s2[j]!=' ')
            {
                l+=s2[j];
            }
        }

        if(l==p)
        {
            cout<<"Case "<<k++<<": Yes"<<endl;

        }
        else
        {
            cout<<"Case "<<k++<<": No"<<endl;
        }

    }

}
