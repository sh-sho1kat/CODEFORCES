                        //////////////////////////////////
                        //   Md. Shefat Hossen Shoikat  //
                        //   2003045                    //
                        //   RUET                       //
                        //////////////////////////////////

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int t;
    int i,j,k,l;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        int sum=0,count=0,rem,res;
        int flag=0;
        
        int temp;
        int arr[n+5];
        for(i=0;i<n;i++)
        {
            scanf("%d",&arr[i]);
            
        }
        int check=arr[0];
        for(i=0;i<n;i++)
        {
            //scanf("%d",&arr[i]);
            if(arr[i]>=flag)
            {
                flag=arr[i];
            }
            if(arr[i]<=check)
            {
                check=arr[i];
            }
            
        }
        printf("%d\n",flag-check);

    }
    return 0;
}