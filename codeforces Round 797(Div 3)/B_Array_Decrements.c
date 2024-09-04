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
    scanf("%lld",&t);
    while(t--)
    {
        long long int count=0,flag=0;
        long long int n,queen=1000000000,temp;
        scanf("%lld",&n);
        long long int kristina1[n+5];
        long long int kristina2[n+5];
        long long int i,j,k,l;
        for (i=0;i<n;i++)
        {
            scanf("%lld",&kristina1[i]);
        }
        for (i=0;i<n;i++)
        {
            scanf("%lld",&kristina2[i]);
        }
        for (i=0;i<n;i++)
        {
            if(kristina2[i]>kristina1[i])
            {
                flag=1;
                break;
            }
        }
        if(flag==0)
        {
            for(i=0;i<n;i++)
            {
                if(kristina2[i]!=0)
                {
                    queen=kristina1[i]-kristina2[i];
                    break;
                }

            }
            for(i=0;i<n;i++)
            {
                if(kristina2[i]!=0)
                {
                    temp=kristina1[i]-kristina2[i];
                    if(temp!=queen)
                    {
                        flag=1;
                        break;
                    }
                }
                if(kristina2[i]==0)
                {
                    if(queen<kristina1[i])
                    {
                        flag=1;
                        break;
                    }
                }

            }
        }

        if(flag==0)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }

    }
    return 0;
}