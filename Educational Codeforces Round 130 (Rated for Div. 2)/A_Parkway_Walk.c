#include <stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int a[105];
        int sum=0;
        int n,e;
        scanf("%d %d",&n,&e);
        for(int i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
            sum+=a[i];
        }
        if(sum>e)
        {
            printf("%d\n",sum-e);
        }
        else{
            printf("0\n");
        }

    }
    return 0;
}