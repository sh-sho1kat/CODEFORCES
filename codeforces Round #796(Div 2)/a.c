#include <stdio.h>
#include <string.h>

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        long long int n,i,a,b,j;
        scanf("%lld",&n);
        // scanf("%lld",&j);
        // a=i&n;
        // b=i^n;
        // printf("%lld %lld\n",a,b);
        for(i=1;;i++)
        {
            a=i&n;
            b=i^n;
            //printf("%lld %lld\n",a,b);
            if((a>0)&&(b>0))
            {
                printf("%lld\n",i);
                break;
            }
        }
    }
    return 0;
}