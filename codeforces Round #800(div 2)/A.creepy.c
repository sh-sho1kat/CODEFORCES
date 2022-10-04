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
    long long int t;
    long long int i,j,k,l;
    scanf("%lld",&t);
    while(t--)
    {
        // long long int n;
        // scanf("%lld",&n);
        // long long int sum=0,rem,res;
        // int arr[n+5];
        // for(i=0;i<n;i++)
        // {
        //     scanf("%d",&arr[i]);
        //     sum+=arr[i];
        // }
        int n,z,p;
        scanf("%d %d",&n,&z);
        char str[205];
        if(n==z)
        {
            for(i=0;i<n+z;i+=2)
            {
               str[i]='0';
            }
            for(i=1;i<n+z;i+=2)
            {
                str[i]='1';
            }
            str[z+n]='\0';
        }
        else if(n>z)
        {
            p=n/2;
            for(i=0;i<p;i++)
            {
                str[i]='0';
            }
            for(i=p;i<p+z;i++)
            {
                str[i]='1';
            }
            for(i=p+z;i<n+z;i++)
            {
                str[i]='0';
            }
        }
        else if(z>n)
        {
            p=z/2;
            for(i=0;i<p;i++)
            {
                str[i]='1';
            }
            for(i=p;i<p+n;i++)
            {
                str[i]='0';
            }
            for(i=p+n;i<n+z;i++)
            {
                str[i]='1';
            }
        }
        str[n+z]='\0';
        
        printf("%s\n",str);


    }
    return 0;
}