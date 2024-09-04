#include <stdio.h>
#include <string.h>

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        long int a,b;
        scanf("%ld %ld",&a,&b);
        if(a==0)
        {
            printf("1\n");
        }
        else
        {
            printf("%ld\n",1+a+2*b);
        }
    }
    return 0;
}