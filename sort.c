#include <stdio.h>

void printarr(int arr[], int n)
{
    printf("\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return;
}

void InsertionSort(int arr[], int n);
void SelectionSort(int arr[], int n);
void BubbleSort(int arr[], int n);
void MergeSort(int arr[], int n);
void QuickSort(int arr[], int n);

int main()
{
    int n, srno;
    printf("Enter the Size of the array: ");
    scanf("%d ", &n);

    int arr[n];
    printf("Enter %d integers separated by a space:\n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter the code for the following-\n1. Insertion Sort\n2.Selection Sort\n3.Bubble Sort\n4. Merge Sort\n5. Quick Sort\n");
    scanf("%d", &srno);

    switch (srno)
    {
    case 1:
        // InsertionSort(arr, n);
        break;
    case 2:
        // SelectionSort(arr, n);
        break;
    case 3:
        // BubbleSort(arr, n);
        break;
    case 4:
        // MergeSort(arr, n);
        break;
    case 5:
        // QuickSort(arr, n);
        break;
    default:
        srno = -1;
    }

    if (srno == -1)
    {
        printf("ERROR: Enter Valid Code.\n");
    }
    else
    {
        printf("Sorted array is:");
        printarr(arr, n);
    }

    return 0;
}