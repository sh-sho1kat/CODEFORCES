#include <stdio.h>
#include <math.h>
int main()
{
    int t;
    scanf("%d",&t);
    float res;
    //printf("%f ",res);
    while(t--)
    {
        int a,b;
        scanf("%d %d",&a,&b);
        float sum;
        float d=0;
        sum=sqrt(a*a+b*b);
        int check;
        check=sum/1;
        res=sum-check;
        //printf("%d %f %f\n",check,sum,d);
        if(a==0&&b==0)
        {
            printf("0\n");
        }
        else if(res==0)
        {
            printf("1\n");
        }

        else
        {

            printf("2\n");
        }

    }

    return 0;
}
