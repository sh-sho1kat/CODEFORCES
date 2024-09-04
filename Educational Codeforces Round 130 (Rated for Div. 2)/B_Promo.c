#include <stdio.h>
int main()
{
    int i,j,k;
    int n,q;
    
    scanf("%d %d",&n,&q);
    int arr[n+5];
    int brr[200000];

    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int a,b;
    for(k=0;k<q;k++)
    {
        int max=0;
        int temp=2000000;
        scanf("%d %d",&a,&b);
        // for(k=0;k<a;k++)
        // {
        //     for(j=0;j<n;j++)
        // {
        //     if(j==temp)
        //     {
        //         continue;
        //     }
        //     else if(arr[j]>max)
        //     {
        //         max=arr[j];
        //         temp=j;
        //     }
        // }
        // printf("%d ",max);
        // max=brr[k];
        
        // max=0;
        // }
        // // for(k=0;k<a;k++)
        // // {
        // //     printf("%d ",brr[k]);
        // // }
        int sum=0;

        // for(k=a-1;k>a-b;k--)
        // {
        //     sum=sum+brr[k];
        // }
        // printf("%d\n",sum);
        for(i=0;i<n;i++)
        {
            for(j=i+1;j<n;j++)
            {
                if(arr[i]<arr[j])
                {
                    temp=arr[j];
                    arr[j]=arr[i];
                    arr[i]=temp;
                }
            }
        }
        // for(i=0;i<n;i++)
        // {
        //     printf("%d ",arr[i]);
        // }
        int c=a-b;
        for(i=c;i<a;i++)
        {
            //printf("%d ",arr[i]);
            sum+=arr[i];
        }
        printf("%d\n",sum);

    }








    return 0;
}