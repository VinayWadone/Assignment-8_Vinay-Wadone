#include<stdio.h>
int main()
{
    int i,j,n;
    printf("\n\nEnter a number\n\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
            if(j>n-i)printf("*");
        else printf(" ");
        printf("\n");
    }

}
