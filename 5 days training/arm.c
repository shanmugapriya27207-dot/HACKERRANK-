#include<stdio.h>
int main()
{
    int rem,original,arm=0,n;
    scanf("%d", &n);
    original = n;
    while(n!=0)
    {
        rem=n%10;
        arm=arm + rem*rem*rem;
        n=n/10;
    }
    if(original == arm)
    {
        printf("yes it is a armstrong number");
    }
    else
    {
        printf("no it is not a armstrong number");
    }
    return 0;6
}
