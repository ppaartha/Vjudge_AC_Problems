#include<stdio.h>
#include<math.h>
#define pi 3.1416
int main()
{
    int n,a,b,c,d,e,f,i;
    double ang,m,O,A,B,p;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d %d %d %d %d %d",&a,&b,&c,&d,&e,&f);

    O=sqrt(((a-c)*(a-c))+((b-d)*(b-d)));
    A=sqrt(((c-e)*(c-e))+((d-f)*(d-f)));
    B=sqrt(((e-a)*(e-a))+((f-b)*(f-b)));
    ang=acos(((O*O)+(B*B)-(A*A))/(2*O*B));
    m=O*ang;

    printf("Case %d: %lf\n",i+1,m);
    }
}
