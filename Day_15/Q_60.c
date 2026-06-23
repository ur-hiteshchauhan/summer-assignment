#include <stdio.h>

int main()
{
    int n, k = 0;

    printf("Enter size: ");
    scanf("%d", &n);

    int arr[n], result[n];

    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    for(int i = 0; i < n; i++)
    {
        if(arr[i] != 0)
            result[k++] = arr[i];
    }

    while(k < n)
        result[k++] = 0;

    printf("Result:\n");

    for(int i = 0; i < n; i++)
        printf("%d ", result[i]);

    return 0;
}
/* 

Input : 1 0 3 0 5
Output: 1 3 5 0 0

*/