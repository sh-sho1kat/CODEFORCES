#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
     int t;
     scanf("%d",&t);
     while(t--)
     {
         long long int n,min,max;
         scanf("%lld",&n);
         if(n==1)
         {
             printf("-1\n");
         }
         else if(n%2!=0)
         {
             printf("-1\n");
         }
         else if(n==2)
         {
             printf("-1\n");
         }
         else if(n%2==0)
         {
             if(n%6==0)
             {
                 min=n/6;
             }
             else
             {
                 min=(n/6)+1;
             }
             max=n/4;
             /*if(n%4==0)
             {
                 max=n/4;
             }
             else
             {
                 max=max;
             }*/
             printf("%lld %lld\n",min,max);


         }

     }
    return 0;
}
