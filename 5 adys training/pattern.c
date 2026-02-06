#include<stdio.h>
/*int main()
{
    int n,i,j;
    scanf("%d", &n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}*
int main()
{
    int n,i,j;
    scanf("%d", &n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}*

int main()
{
    int n,i,j;
    scanf("%d", &n);
    for(i=n;i>=1;i--)
    {
        for(j=1;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}*

int main()
{
    int n,i,j;
    scanf("%d", &n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d", j);
        }
        printf("\n");
    }
    return 0;
}*

int main()
{
    int n,i,j;
    scanf("%d", &n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d", i);
        }
        printf("\n");
    }
    return 0;
}*/

int main()
{
    int n,i,j,k;
    scanf("%d", &n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=2*(n-i)-1;j++)
        {
            printf(" ");
        }
        for(k=1;j<=2*i+1;k++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}
