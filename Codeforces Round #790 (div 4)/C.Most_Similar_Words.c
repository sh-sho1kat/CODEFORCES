#include <stdio.h>
#include <string.h>

int main()
{
    int t;
    int n,m;
    int i,j,k;

    scanf("%d",&t);
    while(t--)
    {
        char str[55][10];
        int min=26*8;
        scanf("%d %d",&n,&m);
        for(i=0;i<n;i++)
        {
            scanf("%s",str[i]);
        }
        for(i=0;i<n;i++)
        {
            for(j=i+1;j<n;j++)
            {
                int sum=0;
                int result;
                for(k=0;k<m;k++)
                {
                    result=abs(str[j][k]-str[i][k]);
                    sum=sum+result;
                }
                if(min>sum)
                {
                    min=sum;
                }
            }
        }
        printf("%d\n",min);

    }
    return 0;
}
