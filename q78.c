#include <stdio.h>

void selectionSort(int *arr, int n)
{
    for (size_t i = 0; i < n; i++)
    {
        int min = i;
        for (size_t j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[min])
                min = j;
        }
        int temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
    }
}

void insertionSort(int *arr, int n)
{
    for (int i = 1; i < n; i++)
    {
        for (int j = i - 1; j >= 0 && arr[j] > arr[j + 1]; j--)
        {
            int temp = arr[j];
            arr[j] = arr[j + 1];
            arr[j + 1] = temp;
        }
    }
}

void bubbleSort(int *arr, int n)
{
    for (int i = n - 1; i >= 0; i--)
    {
        for (int j = 0; j < i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void printArr(const char *str, int *arr, int n)
{
    printf("%s", str);
    for (int i = 0; i < n; i++)
        printf("%d, ", arr[i]);
    putchar('\n');
}

int main()
{
    int arr[] = {54, 36, 14, 12, 6, 4, 49, 98, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    // selectionSort(arr, n);
    // insertionSort(arr, n);
    bubbleSort(arr, n);
    printArr("After sorting: ", arr, n);
    return 0;
}