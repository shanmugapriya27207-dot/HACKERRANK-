#include <stdio.h>

int main() {

    int n,temp;
    scanf("%d", &n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d", &arr[i]);
    }
    for(int i=0;i<n;i+=2)
    {
        temp=arr[i];
        arr[i]=arr[i+1];
        arr[i+1]=temp;

    }
    for(int i=0;i<n;i++)
    {
        printf("%d", arr[i]);
    }


    return 0;
}


int main()
{
    int n,value;
    scanf("%d", &n);
    scanf("%d", &value);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d", &arr[i]);
    }

}
