#include <stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,p,q;
        int count1=0,count2=0,count3=0,count4=0;
        scanf("%d",&n);
        int a[n+5];
        for(int i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
        p=a[0]%2;
        q=a[1]%2;
        for(int j=0;j<n;j+=2)
        {
            if(a[j]%2!=p)
            {
                //printf("NO\n");
                count1=1;
                break;
            }
            // else
            // {
            //     count2++;
            // }
        }
        for(int j=1;j<n;j+=2)
        {
            if(a[j]%2!=q)
            {
                //printf("NO\n");
                count1=1;
                break;
            }
            // else
            // {
            //     count4++;
            // }
        }

        if(count1==0)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
        count1=0;
    }
    return 0;
}