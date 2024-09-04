#include <stdio.h>
#include <string.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,m;
        int arr1[100];
        int arr2[100];
        int alices=0;
        int bobs=0;
        scanf("%d",&n);
        for(int i=0;i<n;i++)
        {
            scanf("%d",&arr1[i]);
            if(alices<arr1[i])
            {
                alices=arr1[i];
            }
        }
        scanf("%d",&m);
        for(int i=0;i<m;i++)
        {
            scanf("%d",&arr2[i]);
            if(bobs<arr2[i])
            {
                bobs=arr2[i];
            }
        }
        if(alices>bobs)
        printf("Alice\nAlice\n");

        else if(bobs>alices)
        {
            printf("Bob\nBob\n");
        }
        else
        {
            printf("Alice\nBob\n");
        }

    }
    return 0;
}
