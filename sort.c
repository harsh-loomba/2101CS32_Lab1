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

void BubbleSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(&arr[j], &arr[j + 1]);
            }
        }
    }
}

void merge(int arr[], int left, int right, int split)
{
    int size1 = split - left + 1, size2 = right - split;

    int L_arr[size1], R_arr[size2];

    for (int i = 0; i < size1; i++)
    {
        L_arr[i] = arr[left + i];
    }

    for (int i = 0; i < size2; i++)
    {
        R_arr[i] = arr[split + 1 + i];
    }

    int i = 0, j = 0, k = left;

    while ((i < size1) && (j < size2))
    {
        if (L_arr[i] < R_arr[j])
        {
            arr[k] = L_arr[i];
            i++;
        }
        else
        {
            arr[k] = R_arr[j];
            j++;
        }
        k++;
    }

    while (i < size1)
    {
        arr[k] = L_arr[i];
        i++;
        k++;
    }

    while (j < size2)
    {
        arr[k] = R_arr[j];
        j++;
        k++;
    }

    return;
}

void MergeSort(int arr[], int left, int right)
{
    if (left < right)
    {
        int split = left + (right - left) / 2;
        MergeSort(arr, left, split);
        MergeSort(arr, split + 1, right);

        merge(arr, left, right, split);
    }

    return;
}

int partition(int arr[], int left, int right)
{
    int pivot = arr[right];
    int i = left - 1;

    for (int j = left; j <= right; j++)
    {
        if (arr[j] < pivot)
        {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }

    swap(&arr[i + 1], &arr[right]);

    return (i + 1);
}

void QuickSort(int arr[], int left, int right)
{
    if (left < right)
    {
        int part_index = partition(arr, left, right);

        QuickSort(arr, left, part_index - 1);
        QuickSort(arr, part_index + 1, right);
    }

    return;
}

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
        BubbleSort(arr, n);
        break;
    case 4:
        MergeSort(arr, 0, n - 1);
        break;
    case 5:
        QuickSort(arr, 0, n - 1);
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