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
    long long int i,j,k,l;
    scanf("%lld",&t);
    while(t--)
    {
        int a,b,x,y;
        scanf("%d %d",&x,&y);
        a=1;
        b=y/x;
        if(x>y)
        {
            printf("0 0\n");
        }
        else if(y%x!=0)
        {
            printf("0 0\n");
        }
        else
        {
            printf("%d %d\n",a,b);
        }


    }
    return 0;
}