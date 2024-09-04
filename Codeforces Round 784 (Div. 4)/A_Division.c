#include <stdio.h>
#include <string.h>

int main()
{
    int t,rating;

    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&rating);

        if(rating>=1900)
        {
            printf("Division 1\n");
        }
        else if(rating>=1600&&rating<=1899)
        {
            printf("Division 2\n");
        }
        else if(rating>=1400&&rating<=1599)
        {
            printf("Division 3\n");
        }
        else
        {
            printf("Division 4\n");
        }
    }
}
// For Division 1: 1900≤rating
// For Division 2: 1600≤rating≤1899
// For Division 3: 1400≤rating≤1599
// For Division 4: rating≤1399