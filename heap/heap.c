#include <stdio.h>
int size = 0;
void swap(int *, int *);
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
void heapify(int *arr, int i)
{
    int max = i;
    int left = i * 2 + 1;
    int right = i * 2 + 2;
    if (left < size && arr[max] < arr[left])
        max = left;
    if (right < size && arr[right] > arr[max])
        max = right;
    if (max != i)
        swap(&arr[max], &arr[i]);
}
void insert(int *arr, int data)
{
    arr[size++] = data;
    for (int i = size / 2 - 1; i >= 0; i--)
        heapify(arr, i);
}
void delete(int *arr, int data)
{
    int i;
    for (i = 0; i < size; i++)
        if (arr[i] == data)
            break;
    swap(&arr[i], &arr[size - 1]);
    size--;
    for (i = size / 2 - 1; i >= 0; i--)
        heapify(arr, i);
}
int main()
{
    int arr[10];
    insert(arr, 3);
    insert(arr, 4);
    insert(arr, 9);
    insert(arr, 5);
    insert(arr, 2);

    printf("max heap is\n");
    for (int i = 0; i < size; i++)
        printf("%d ", arr[i]);

    delete (arr, 4);
    printf("\nafter deleting heap is something like this\n");
    for (int i = 0; i < size; i++)
        printf("%d ", arr[i]);

    return 0;
}