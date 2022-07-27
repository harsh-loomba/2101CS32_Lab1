#include <stdio.h>
#include <stdlib.h>
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

void swap(int *a, int *b)
{
    int tmp = *a;
    *a = *b;
    *b = tmp;
    return;
}

void InsertionSort(int arr[], int n)
{
    int chk, j;

    for (int i = 1; i < n; i++)
    {
        chk = arr[i];
        j = i - 1;

        while ((j >= 0) && (arr[j] > chk))
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = chk;
    }

    return;
}

void SelectionSort(int arr[], int n)
{
    int min;
    for (int i = 0; i < n - 1; i++)
    {
        min = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[min])
            {
                min = j;
            }
        }
        swap(&arr[min], &arr[i]);
    }
    return;
}

void BubbleSort(int arr[], int n);
void MergeSort(int arr[], int n);
void QuickSort(int arr[], int n);

int main()
{
    int n, srno;
    printf("Enter the Size of the array: ");
    scanf("%d", &n);

    int *arr;
    arr = (int *)malloc(n * sizeof(int));
    printf("Enter %d integers separated by a space:\n", n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter the code for the following-\n1. Insertion Sort\n2. Selection Sort\n3. Bubble Sort\n4. Merge Sort\n5. Quick Sort\n");
    scanf("%d", &srno);

    switch (srno)
    {
    case 1:
        InsertionSort(arr, n);
        break;
    case 2:
        SelectionSort(arr, n);
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

    free(arr);

    return 0;
}