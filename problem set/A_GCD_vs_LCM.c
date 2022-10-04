                        //////////////////////////////////
                        // © Md. Shefat Hossen Shoikat  //
                        //   2003045                    //
                        //   RUET                       //
                        //////////////////////////////////

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int t;
    
    scanf("%d",&t);
    while(t--)
    {
        long long int i,j,k,l;
        int n;
        scanf("%d",&n);
        // if(n%4==0)
        // {
        //     i=n/4;
        //     printf("%lld %lld %lld %lld\n",i,i,i,i);
        // } 
        // else if(n%2!=0)
        // {
        //     i=2;
        //     j=n-5;
        //     k=2;
        //     l=1;
        //     printf("%lld %lld %lld %lld\n",i,j,k,l);
        // }
        // else if(n%2==0)
        // {
        //     i=(n-2)/2-1;
        //     j=i+2;
        //     k=1;
        //     l=1;
        //     printf("%lld %lld %lld %lld\n",i,j,k,l);

        // }
        i=n-3;
        printf("%lld 1 1 1\n",i);
    }
    return 0;
}