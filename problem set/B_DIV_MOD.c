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
    long long int t;
    long long int i,j,k;
    scanf("%lld",&t);
    while(t--)
    {
        long long res,max=0;
        long long int l,r,a;
        scanf("%lld %lld %lld",&l,&r,&a);
        // for(i=l;i<=r;i++)
        // {
        //     res=i/a+i%a;
        //     if(res>max)
        //     {
        //         max=res;
        //     }
        // }
        // printf("%lld\n",max);
        if(l/a==r/a)
        {
            res=r/a+r%a;
        } 
        else
        {
            res=r/a+r%a;
            max=r/a-1+a-1;
            if(max>res)
            {
                res=max;
            }
            
        }
        printf("%lld\n",res);
    }
    return 0;
}