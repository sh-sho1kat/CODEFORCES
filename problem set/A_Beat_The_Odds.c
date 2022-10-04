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
    long int ecount=0;
    long int ocount=0;
    long long int i,j,k,l;
    scanf("%lld",&t);
    while(t--)
    {
        long int n;
        scanf("%ld",&n);
        long int arr[n+5];
        for(i=0;i<n;i++)
        {
            scanf("%ld",&arr[i]);
            if(arr[i]%2==0)
            {
                ecount++;
            }
            else
            {
                ocount++;
            }
        }
        if(ocount>ecount)
        {
            printf("%ld\n",ecount);
        } 
        else
        {
            printf("%ld\n",ocount);
        }
        ecount=0;
        ocount=0;

    }
    return 0;
}