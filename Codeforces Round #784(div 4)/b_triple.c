#include <stdio.h>
#include <string.h>
int main()
{
    int count;
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int answer =-1;
        int n;
        int a[200000];
        scanf("%d",&n);
        for(int i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
        for(int j=0;j<n;j++)
        {
            count =0;
            for(int k=j;k<n;k++)
            {
                if(a[j]==a[k])
                {
                    count+=1;
                }
                if(count>=3)
                {
                    answer=a[j];
                    break;
                
            }
            // if(count>=3)
            //     {
            //         answer=a[j];
            //         break;
                }
               //printf("%d\n",count); 
        }
        printf("%d\n",answer);
        // int count;
        // if(count<3)
        // {
        //     printf("-1\n");
        // }
    }
    return 0;
}