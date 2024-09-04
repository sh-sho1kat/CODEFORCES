#include <stdio.h>
#include <string.h>

int main()
{
    int t;
    int i,j,k,l;
    scanf("%d",&t);
    while(t--)
    {
        int n,m;
        scanf("%d %d",&n,&m);
        char str[n+1][m+1];
        for(i=0;i<n;i++)
        {
            scanf("%s",&str[i]);
            //printf("%s\n",str[i]);
        }
        int count1=0;
        int first1=-1;
        int first2=-1;
        for(j=0;j<n;j++)
        {
            for(k=0;k<m;k++)
            {
                if(str[j][k]=='R')
                {
                     count1++;
                }
                if(str[j][k]=='R')
                {
                    if(first1==-1)
                    {
                        first1=j;
                        first2=k;
                    }

                }

            }
        }
        //printf("%d %d %d",first1,first2,count1);

        int count2=0;
        for(l=first1;l<n;l++)
        {
            for(j=first2;j<m;j++)
            {
                if(str[l][j]=='R')
                {
                    count2++;
                }
            }
        }

        if(count1==count2)
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