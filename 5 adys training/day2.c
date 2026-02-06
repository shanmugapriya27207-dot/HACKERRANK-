#include<stdio.h>
/*int main()
{
    int n,flag=1;
    scanf("%d", &n);
    if(n<=1)
    {
        flag = 0;
    }
    else
    {
        for(int i=2;i*i<=n;i++)
        {
            if(n%i==0)
            {
                flag=0;
                break;
            }
        }

    }
    if(flag==1)
    {
        printf("prime");
    }
    else
    {
        printf("not prime");
    }
    return 0;
}
*/
int isprime(int n)
{   if(n<=1)
    {
        return 0;
    }
    for(int i=2;i*i<=n;i++)
    {
        if(n%i==0)
        {
            return 0;
        }
    }
    return 1;
}



int main()
{
    int n;
    scanf("%d", &n);
    if(isprime(n))
    {
        printf("prime");
    }
    else
    {
        printf("not prime");
    }
    return 0;
}
