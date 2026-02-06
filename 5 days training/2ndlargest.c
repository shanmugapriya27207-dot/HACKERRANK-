#include<stdio.h>
#include<limits.h>
int main()
{
    int n;
    scanf("%d", &n);
    if(n<2)
    {
        printf("second largest is not possible");
        return 0;
    }

    int arr[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int largest = INT_MIN;
    int second = INT_MIN;

    for(int i = 0;i<n;i++)
    {
        if(arr[i]>largest)
        {
            second=largest;
            largest=arr[i];
        }
        else if(arr[i]<largest && arr[i]>second)
        {
            second = arr[i];
        }
    }
    if(second == INT_MIN)
    {
        printf("second largest not exist");
    }
    else
    {
        printf("the second largest element is %d", second);
    }
    return 0;
}
