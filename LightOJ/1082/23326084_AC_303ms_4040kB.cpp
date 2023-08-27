#include<bits/stdc++.h>
using namespace std;
#define maxx 1000000000
int arr[100100];
int tree[4*100100];
void segment(int node,int beg,int en)
{
    if(beg==en)
    {
        tree[node]=arr[beg];
        return ;
    }
    int left=2*node;
    int right=2*node+1;
   int mid=(beg+en)/2.0;
    segment(left,beg,mid);
    segment(right,mid+1,en);
    tree[node]=min(tree[left],tree[right]);
}
int query(int node,int beg,int en,int i,int j)
{
  if(i>en|| j<beg)
  {
      return maxx;
  }
  if(beg>=i&&en<=j)
  {
      return tree[node];
  }

    int left=2*node;
    int right=2*node+1;
   int mid=(beg+en)/2.0;
    return min(query(left,beg,mid,i,j),query(right,mid+1,en,i,j));
}

int main()
{
    int t;
    cin>>t;
  for(int p=1;p<=t;p++)
   {
       int n,q;
       scanf("%d%d",&n,&q);
       for(int k=1;k<=n;k++)
       {
           scanf("%d",&arr[k]);
       }
       segment(1,1,n);
       printf("Case %d:\n",p);
      while(q--)
       {
           int i,j;
          scanf("%d%d",&i,&j);
          printf("%d\n",query(1,1,n,i,j));

       }
   }



}