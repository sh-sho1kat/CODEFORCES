#include <stdio.h>
#include <string.h>

int main()
{
    int t=10;
    while(t--)
    {
        int arr[10];
        int a[10];
          int count[45]={0};
        for(int i=0;i<10;i++)
        {
            scanf("%d",&arr[i]);
            a[i]=arr[i]%42;
            //printf("%d ",a[i]);
        }
        for(int i=0;i<42;i++)
        {
            count[a[i]]++;
        }
        // for(int j=0;j<43;j++)
        // {
        //     printf("%d ",count[j]);
        // }
        int cnt=0;
        for(int j=0;j<42;j++)
        {
            if(count[j]!=0)
            cnt++;
        }
        printf("%d\n",cnt-1);


    }

    return 0;
}
