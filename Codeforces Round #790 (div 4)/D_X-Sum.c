#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{
    int t,m,n;
    int i,j,k;
    //int max=0;
    scanf("%d",&t);
    while(t--)
    {
        int max=0;
        scanf("%d %d",&m,&n);
        int a[200][200];
        for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
            {
                scanf("%d",&a[i][j]);
            }
        }
        // for(i=0;i<m;i++)
        // {
        //     for(j=0;j<n;j++)
        //     {
        //         printf("%d ",a[i][j]);
        //     }
        //     printf("\n");
        // }
        //int sum=0;
        for(i=0;i<m;i++)
        {
            int sum=0;
            for(j=0;j<n;j++)
            {
                int p=i;
                int q=j;
                while(p!=-1&&q!=n)
                {
                    sum=sum+a[p][q];
                    //printf("%d ",a[p][q]);
                    p--;
                    q++;

                }
                //printf("%d ",sum);
                int r=i+1;
                int s=j+1;
                while(r!=m&&s!=n)
                {
                    sum=sum+a[r][s];
                    r++;
                    s++;
                }
                //printf("%d ",sum);
                int u=i+1;
                int v=j-1;
                while(u!=m&&v!=-1)
                {
                    sum=sum+a[u][v];
                    u++;
                    v--;
                }
                int c=i-1;
                int d=j-1;
                while(c!=-1&&d!=-1)
                {
                    sum=sum+a[c][d];
                    c--;
                    d--;
                }
                //printf("%d\n",sum);
                if(sum>max)
                {
                    max=sum;
                }
                 sum=0;
            }
            
        }
        printf("%d\n",max);


    }
    return 0;
}