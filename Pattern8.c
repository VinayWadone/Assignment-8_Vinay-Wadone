#include<stdio.h>
int main()
{
    int i,j,m,n,p,q;
    printf("\n\nEnter a number for rows\n\n");
    scanf("%d",&m);
    printf("\n\nEnter a number for columns\n\n");
    scanf("%d",&n);
    //p=n/2;
    printf("\n");

    for(i=1;i<=m;i++)
    {
        p=1;
        q=1;
        for(j=1;j<=n;j++)
        {
        //p=0;
         //q=1;
         if(j>=5-i&&j<=i+3)
         {
             if(j>i)
             {
              printf("%d",q);
              q++;
             }
            else
             {
            printf("%d",p);
            p++;
             }

         }
         else printf(" ");
        // p++;
         }
         //p++;
        printf("\n");
    }
    return 0;

    }


