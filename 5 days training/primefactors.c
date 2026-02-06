#include<stdio.h>
/*int main()
{
    int number;
    scanf("%d", &number);
    for(int j=2;j<=number;j++)
    {
        while(number%j==0)
        {
            printf("%d\n", j);
            number = number /j;
        }
    }
    return 0;
}*/
int main()
{
    int num1,num2;
    scanf("%d %d", &num1, &num2);
    int add = 0;
    int max=num1;
    if(num1<num2)
    {
        max=num2;
    }
    for(int i=1;i<=max;i++)
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
