#include<stdio.h>
#include<string.h>

int main()
{
    int n,a[101],b=0,c=0,i,x,z;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i+1]);
    }
    for(i=0;i<n;i++){
        if(a[i+1]%2==0){
          c++;
          x=i+1;
        }
        else{
          b++;
          z=i+1;
        }
    }
    if(c==1) printf("%d",x);
    else if(b==1) printf("%d",z);

    return 0;
}

