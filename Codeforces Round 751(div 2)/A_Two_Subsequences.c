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
        char str[105];
        scanf(" %s",str);
        //gets(str);
        int len=strlen(str);
        int temp=0;
        char str1[1];
        char a='z';
        str1[1]='\0';     

        char str2[len];
        for(i=0;i<len;i++)
        {
            if(str[i]<a)
            {
                a=str[i];
                temp=i;
            }
        }
        //printf("%d\n",temp);
        for(i=0;i<temp;i++)
        {
            str2[i]=str[i];
        }
        for(i=temp;i<len;i++)
        {
            str2[i]=str[i+1];
        }
        str2[i+1]='\0';
        printf("%c %s\n",a,str2);
    }
    return 0;
}