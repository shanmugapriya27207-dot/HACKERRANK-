#include<stdio.h>
#include<math.h>
/*int main()
{
    int day;
    scanf("%d", &day);
    switch(day)
    {
        case 1:
            printf("happy sunday");
            break;
        case 2:
            printf("monday");
            break;
        case 3:
            printf("tuesday");
            break;
        case 4:
            printf("wednesday");
            break;
        case 5:
            printf("thursday");
            break;
        case 6:
            printf("friday");
            break;
        case 7:
            printf("saturday");
            break;
    }
    return 0;
}*/

int main()
{
    int n,a,b,temp=0;
    a=0;
    b=1;
    scanf("%d", &n);
    for(int i=0;i<=n;i++)
    {
        temp=a;
        a=b;
        b=a+temp;
        printf("%d\n",temp);
    }
    return 0;
}
/*
int main()
{
    int n,a,b,temp;
    a=0;
    b=1;
    scanf("%d", &n);
    if(n==0 || n==1)
    {
        printf("%d", n);
        return 0;
    }
    for(int i=0;i<=n;i++)
    {
        temp=a+b;
        a=b;
        b=temp;

    }
    printf("%d\n",temp);
    return 0;
}*/


/*int factorial(int num)
{
    int fact =1;
    if(num<0)
    {
        return 0;
    }
    if(num == 0 || num == 1)
    {
        return 1;
    }
    else{
            for(int i=1; i<=num; i++)
            {
                fact = fact*i;
            }
            return fact;
    }
}
int main()
{
    int num;
    scanf("%d", &num);
    printf("%d", factorial(num));
    return 0;
}*/


