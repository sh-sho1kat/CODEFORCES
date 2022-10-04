#include <stdio.h>
#include <string.h>

int main()
{

    int t;
    scanf("%d",&t);
    while(t--)
    {
        int a,b,c,d;
        scanf("%d %d %d %d",&a,&b,&c,&d);
        // if(a==c)
        // {
        //     printf("%d\n",a);
        // }
        // else if(c>a&&b>c)
        // {
        //     printf("%d\n",c);
        // }
        // else if(c>a&&c>=b)
        // {
        //     printf("%d\n",a+c);
        // }
        // else if(a>c&&d>=a)
        // {
        //     printf("%d\n",a);
        // }
        // else if(a>c&&a>d)
        // {
        //     printf("%d\n",a+c);
        // }
        if(c>=a&&b>=c)
        {
            printf("%d\n",c);
        }
        else if(a>=c&&d>=a)
        {
            printf("%d\n",a);
        }
        else
        printf("%d\n",a+c);
    }
    return 0;
}
