#include<stdio.h>
int main()
{
    int i,j,m,n;
    printf("\n\nEnter a number for rows\n\n");
    scanf("%d",&m);
    printf("\n\nEnter a number for columns\n\n");
    scanf("%d",&n);
    for(i=1;i<=m;i++)
    {
        for(j=1;j<=n;j++)
            if(j>m-i&&j<m+i)printf("*");
        else printf(" ");
        printf("\n");
    }

}
