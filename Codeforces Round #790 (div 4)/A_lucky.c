#include <stdio.h>
#include <string.h>
int main()
{
    int a,i,j,k;
    int t,n;
    int p,q;
    char str[10];
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%s",str);
        p=str[0]+str[1]+str[2];
        q=str[3]+str[4]+str[5];

        if(p==q)
        {
            printf("YES\n");
        }
        else
        printf("NO\n");
    }
    return 0;
}
