#include<stdio.h>
int main()
{
    int i,j,m,n,p;
    printf("\n\nEnter a number for rows\n\n");
    scanf("%d",&m);
    printf("\n\nEnter a number for columns\n\n");
    scanf("%d",&n);
    p=n/2;
    printf("\n");

    for(i=1;i<=m;i++)
    {
        for(j=1;j<=n;j++)
        {
         if(j>p+1-i||j<=p-1+i)printf("*");
         else printf(" ");
        }
        printf("\n");
    }
    return 0;

}
