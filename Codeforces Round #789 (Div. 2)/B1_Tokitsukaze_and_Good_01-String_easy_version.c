                    //////////////////////////////////
                    // © Md. Shefat Hossen Shoikat  //
                    //   2003045                    //
                    //   RUET                       //
                    //////////////////////////////////
#include <stdio.h>
#include <string.h>

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int count=0;
        int n;
        scanf("%d",&n);
        char str[200005];
        scanf("%s",str);
        //puts(str);
        for(int i=0;i<n;i++)
        {
            if(str[i]!=str[i+1])
            {
                count++;
            }
            i++;
        }
        printf("%d\n",count);
    }
    return 0;
}