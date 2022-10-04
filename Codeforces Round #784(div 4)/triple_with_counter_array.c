#include <stdio.h>
#include <string.h>
int main()
{
    int count;
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int flag =-1;
        int n;
        int a[200005];
        scanf("%d",&n);
        for(int i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
        int count[200005]={0};
        for(int j=0;j<n;j++)
        {
            count[a[j]]++;
        }
        for(int j=0;j<=n;j++)
        {
            if(count[j]>=3)
            {
                printf("%d\n",j);
                flag=1;
                break;
            }
            
        }
        if(flag==-1)
            printf("-1\n");

    }
    return 0;
}
