#include <stdio.h>
#include <string.h>

int main()
{
    int t,n;
    int i,j,k;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        long long int a[100000];
        int flag=10000001;
        scanf("%d",&n);
        for(j=0;j<n;j++)
        {
            scanf("%ld",&a[j]);
            if(flag>a[j])
            {
                flag=a[j];
            }
        }
        for(j=0;j<n;j++)
        {
            a[j]=a[j]-flag;
        }
        long long int sum=0;
        for(j=0;j<n;j++)
        {
            sum=sum+a[j];
        }
        printf("%lld\n",sum);


    }



    return 0;
}
