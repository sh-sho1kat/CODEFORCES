#include <stdio.h>
#include <string.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int count=0,flag=0;;
        char a[55];
        char b[5];
        scanf(" %s",a);
        scanf(" %s",b);
        int len;
        len=strlen(a);
        for(int i=0;i<len;i++)
        {
            if(b[0]==a[i])
            {
                //count++;
                if(i%2==0)
                {
                    printf("YES\n");
                    flag=1;
                    break;
                }
            }

        }
        if(flag==0)
        {
            printf("NO\n");
        }
    }
    return 0;
}