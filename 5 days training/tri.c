#include<stdio.h>
/*int main()
{
    int a=0,b=1,c=1,temp;
    int n;
    scanf("%d", &n);
    if(n==0 || n==1 || n==2)
    {
        printf("%d", n);
        return 0;
    }
    for(int i=3;i<=n;i++)
    {
        temp=a+b+c;
        a=b;
        b=c;
        c=temp;
    }
    printf("%d\n", temp);
    return 0;
}*


int main()
{
    int num;
    scanf("%d", &num);
    if(num%2==0)
    {
        printf("the number of lines required is %d.", num/2);
    }
    else
    {
        printf("the number of lines required is %d.", num);
    }
    return 0;
}*/


int main()
{
    int num1,num2;
    scanf("%d %d", &num1, &num2);
    int add = 0;
    for(int i=1;i<=num1 && i<=num2;i++)
    {
        if(num1%i==0 && num2%i==0)
        {
            printf("%d ",i);
            add++;
        }
    }
    printf("\ntotal number of common factors is:%d", add);
    return 0;
}

/*int main()
{
    int num;
    scanf("%d", &num);
    int add = 0;
    for(int i=1;i<=num;i++)
    {
        if(num%i==0)
        {
            printf("%d ",i);
            add++;
        }
    }
    if(add==3)
    {
        printf("\nthe number %d has exactly 3 factors", num);
    }
    else
    {
        printf("\nthe number %d not exactly have 3 factors", num);
    }
    return 0;
}
*/
