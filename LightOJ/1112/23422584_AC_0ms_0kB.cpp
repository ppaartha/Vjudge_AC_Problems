#include<bits/stdc++.h>
using namespace std;
int arr[100010];
int tree[4*100010];
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
    tree[node]=tree[left]+tree[right];
}
int query(int node,int beg,int en,int i,int j)
{
    if(i>en|| j<beg)
    {
        return 0;
    }
    if(beg>=i&&en<=j)
    {
        return tree[node];
    }

    int left=2*node;
    int right=2*node+1;
    int mid=(beg+en)/2.0;
    int x1=query(left,beg,mid,i,j);
    int x2=query(right,mid+1,en,i,j);
    return (x1+x2);
}
void update(int node,int beg,int en,int i,int neww)
{
    if(i<beg||i>en)
    {
        return ;
    }
    if(beg==i&&en==i)
    {
        tree[node]+=neww;
        return ;
    }
    int left=2*node;
    int right=2*node+1;
    int mid=(beg+en)/2.0;
    update(left,beg,mid,i,neww);
    update(right,mid+1,en,i,neww);
    tree[node]=tree[left]+tree[right];
}

int main()
{
    int t;
    scanf("%d",&t);
    for(int p=1; p<=t; p++)
    {
        int n,q,k;
        scanf("%d%d",&n,&q);
        for(k=0; k<n; k++)
        {
            scanf("%d",&arr[k]);
        }
        memset(tree, 0, sizeof(tree));
        segment(1,0,n-1);
        cout<<"Case "<<p<<":"<<endl;
        while(q--)
        {
            int x,i,v,j;
            scanf("%d",&x);
            if(x==1)
            {
                scanf("%d",&i);
                printf("%d\n",arr[i]);
                update(1,0,n-1,i,-arr[i]);
                arr[i]=0;

            }
            else if(x==2)
            {
                scanf("%d%d",&i,&v);
                update(1,0,n-1,i,v);
                arr[i]+=v;
            }
            else if(x==3)
            {
              
                scanf("%d%d",&i,&j);
                printf("%d\n",query(1,0,n-1,i,j));

            }
        }


    }
}