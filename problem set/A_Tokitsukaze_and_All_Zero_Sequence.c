#include <stdio.h>
#include <string.h>

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        int p=0,q=0;
        int arr[1000];
        scanf("%d",&n);
         int count=0;
        for(int i=0;i<n;i++)
        {
            scanf("%d",&arr[i]);
            if(arr[i]==0)
            count+=1;
        }
       
        for(int j=0;j<n;j++)
        {
            for(int k=j+1;k<n;k++)
            {
                if(arr[j]==arr[k])
                {
                    p=j;
                    q=k;
                    break;
                }
                if(p!=0)
                break;
            }
        }
        //printf("%d %d %d\n",p,q,count);
        if(count==0)
        {
            if(q!=0)
        {
            printf("%d\n",n);
        }
        else
        printf("%d\n",n+1);
        }

        else
        {
            printf("%d\n",n-count);
        }

        
        

    }
    return 0;
}
