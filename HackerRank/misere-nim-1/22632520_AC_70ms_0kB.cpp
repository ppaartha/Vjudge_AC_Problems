#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,p,c,c1,k,a[100010];
    cin>>t;
    while(t--)
    {
        p=0,c=0,c1=0;
        cin>>k;
        for(int i=0;i<k;i++)
        {
             cin>>a[i];
             if(a[i]>1)
             {
                c++;
             }
            if(a[i]==1)
            {
                c1++;
            }
             p=p^a[i];
        }

        if(c>=1)
        {
            if(p==0)
            {
               cout<<"Second"<<endl;
            }
             else
             {
                cout<<"First"<<endl;
             }
        }

        else if(k=c1)
        {
            if(p==0)
            {
                 cout<<"First"<<endl;
            }
            else
            {
                 cout<<"Second"<<endl;
            }
        }

    }


    return 0;
}
