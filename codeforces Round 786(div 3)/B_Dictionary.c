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
    //long long int i,j,k,l;
    scanf("%lld",&t);
    while(t--)
    {
        char a[5],b[5];
        char p,q;
        int count=0;;
        scanf(" %s",a);
        //printf("%s\n",a);
        for(char i='a';i<='z';i++)
        {
            for(char j='a';j<='z';j++)
            {
                b[0]=i;
                b[1]=j;
                if(i==j)
                {
                    continue;
                }
                else
                {
                    count++;
                    if(a[0]==b[0]&&a[1]==b[1])
                    {
                        printf("%d\n",count);
                        break;
                    }
                }
            }
        } 
    }
    return 0;
}