#include <stdio.h>

/*int main() {
    int number;
    scanf("%d", &number);
    if(number>20)
    {
        printf("the number is greater than 20");
    }
    else
    {
         printf("the number is less than 20");
    }

    return 0;
}

int main()
{

    int number;
    scanf("%d", &number);
    if(number==0)
    {
        printf("the number is equal to zero");
    }
    else if(number>0)
    {
        printf("the number is positive");
    }
    else if(number<0)
    {
        printf("the number is negative");
    }
    return 0;
}

int main()
{
    for(int i=1; i<=50; i++)//for(int i=2; i<=50; i+=2)
    {
        if(i%2==0)
        {
            printf("%d\n", i);
        }
    }
    return 0;
}*

int main()
{
    int num,sum=0;
    scanf("%d", &num);
    while(num!=0)
    {
        int rem = num%10;
        sum=sum+rem;
        num= num/10;

    }
    printf("%d", sum);
    return 0;
}*

int main()
{
    int num,count=0;
    scanf("%d", &num);
    int n=num;
    while(num!=0)
    {
        int rem = num%10;
        if(n%rem==0)
        {
            count++;
        }
        num= num/10;

    }
    printf("%d", count);
    return 0;


}*

int main()
{
    int num,rev=0;
    scanf("%d", &num);
    while(num!=0)
    {
        int rem = num%10;
        num=num/10;
        rev=rev*10 + rem;
    }
    printf("%d", rev);
}*

// User function Template for C

int checkYear(int n) {
    if(n%4==0 )
    {
        return 1;
    }
    else if(n%100 != 0)
    {
        return 0;
    }
    else if(n%400 == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}*
int main()
{
    int n;
    scanf("%d", &n);
    int i,sum=0;
    for(i=1;i<n;i++)
    {
       if(n%i==0)
       {
            sum+=i;
       }
    }
    if(sum==n)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
}*

int main()
{
    int n;
    scanf("%d", &n);
    if(n<=1)
    {
        printf("not");
    }
    for(int i=2; i<n; i++)
    {
        if(n%i==0)
        {
            printf("not prime");
        }
    }
    printf("prime");
}
int addDigits(int num) {
        while(num>=10)
        {
            int sum =0;
            while(num>0)
            {
                sum=num%10;
                num/=10;
            }
            num = sum;
        }
        return num;

    }
}*/

