#include <stdio.h>
#include <string.h>

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int p;
        char str[1000000];
        int min[1000];
        scanf("%s",str);
        int len=strlen(str);
        char mint=100;
        for(int i=0;i<len;i++)
        {
            
            min[i]=str[i]-'0';
            
            //printf("%d ",min[i]);       
        }
        for(int j=0;j<len;j++)
        {
            if(mint>min[j])
            {
                mint=min[j];
                //printf("%d ",mint);

            }
            
            
        }
        
        if(len==2)
        printf("%c\n",str[1]);
        else
        printf("%d\n",mint);
    }
    // char a='T';
    // printf("%c",a);

    return 0;
}
