#include<stdio.h>
#include<stdlib.h>
/*int main()
{
    int n;
    scanf("%d", &n);
    n=abs(n);
    int max=0;
    int min=9;

    if(n==0)
    {
        printf("0 0\n");
        return 0;
    }
    else
    {
        while(n>0)
        {
            int digit = n%10;
            if(digit>max)
            {
                max=digit;
            }
            if(digit<min)
            {
                min=digit;
            }
            n=n/10;
        }
    }
    printf("%d %d", max ,min);
    return 0;
}
*

#include <stdio.h>
#include <stdbool.h>

bool isPalindromeHalfReverse(int num) {
    if (num < 0 || (num > 0 && num % 10 == 0))
    {
        return false;
    }

    int reversed_half = 0;
    while (num > reversed_half) {
        reversed_half = reversed_half * 10 + num % 10;
        num /= 10;
    }
    return num == reversed_half || num == reversed_half / 10;
}

int main() {
    int number1 = 121;
    int number2 = 123321;
    int number3 = 123;

    printf("%d is a palindrome: %s\n", number1, isPalindromeHalfReverse(number1) ? "true" : "false");
    printf("%d is a palindrome: %s\n", number2, isPalindromeHalfReverse(number2) ? "true" : "false");
    printf("%d is a palindrome: %s\n", number3, isPalindromeHalfReverse(number3) ? "true" : "false");

    return 0;
}
*


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
}*/

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
}
