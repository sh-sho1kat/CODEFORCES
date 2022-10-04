                    //////////////////////////////////
                    // © Md. Shefat Hossen Shoikat  //
                    //   2003045                    //
                    //   RUET                       //
                    //////////////////////////////////

#include <stdio.h>

int main()
{
    int t,n;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        int a,b,c;
        int rem;
        int div;
        /*//a=n/3;
        //b=(n/3)+n%3+1;
        //c=(n/3)-1;
        //b=n/2;
        if(n%2==0)
        {
            b=n/2;
            c=1;
            a=n/2-1;
        }
        else if(n==7)
        {
            a=2;
            b=4;
            c=1;
        }
        else if(n%3==0)
        {
            b=n/2;
            c=2;
            a=n/2-1;
        }
        else
        {
            b=(n/2);
            c=2;
            a=b-1;
        }*/
        div=n/3;
        if(n%3==0)
        {

            a=div;
            b=a+1;
            c=n-(a+b);
        }
        else
        {
            b=div+2;
            a=div;
            c=n-b-a;
            if(a==c)
            {

                a=a+1;
                c=c-1;
            }
        }

        printf("%d %d %d\n",a,b,c);
    }
    return 0;
}
