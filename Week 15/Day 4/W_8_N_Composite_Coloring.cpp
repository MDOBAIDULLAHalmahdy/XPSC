#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
#define sz 2009
#define mod 1000000007
ll n,m,i,j,k,l,l1,t,arr[sz],a,b,c,d,x,y,x1,x2,y1,y2,brr[sz],crr[sz],drr[sz];
int main()
{
    brr[0]=2;
    for(i=3;i*i<=1000;i+=2)
    {
        if(crr[i]==0)
        {
            for(j=i*i;j<=1000;j+=2*i)
                crr[j]=1;
        }
    }
    k=0;
    for(i=3;i<=1000;i+=2)
    {
        if(crr[i]==0)
            brr[++k]=i;
    }
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld",&n);
        m=0;
        memset(drr,0,sizeof drr);
        for(i=0;i<n;i++)
            scanf("%lld",&arr[i]),crr[i]=0;
        for(i=0;i<n;i++)
        {
            for(j=0;j<=k;j++)
            {
                if(arr[i]%brr[j]==0)
                {
                    if(drr[j]==0)
                        drr[j]=++m;

                    crr[i]=drr[j];
                    break;
                }
            }
        }
        printf("%lld\n",m);
        for(i=0;i<n;i++)
            printf("%lld ",crr[i]);
        printf("\n");
    }
    return 0;
}
