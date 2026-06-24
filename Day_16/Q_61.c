#include <stdio.h>

int main()
{
    int n, sum = 0;

    printf("Enter size: ");
    scanf("%d", &n);

    int arr[n];

    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    int total = (n + 1) * (n + 2) / 2;

    printf("Missing Number = %d", total - sum);

    return 0;
}

/* 
output =
1 2 3 5
Missing = 4

*/