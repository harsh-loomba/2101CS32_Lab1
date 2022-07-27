#include <stdio.h>

int main()
{
    int n;
    printf("Enter the Size of the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d integers separated by a space:\n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", arr[i]);
    }

    return 0;
}