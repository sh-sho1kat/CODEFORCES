#include <stdio.h>
#include <math.h>

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        long long int a,b,c,x,y,z,sum;
        scanf("%lld %lld %lld",&a,&b,&c);

        x=a+b+c;
        y=b+c;
        z=c;
        printf("%lld %lld %lld\n",x,y,z);

    }
    return 0;
}
