#include <stdio.h>
int size = 0;
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
    return;
}
void heapify(int *arr, int i)
{
    int max = i;
    int left = i * 2 + 1;
    int right = i * 2 + 2;
    if (left < size && arr[max] < arr[left])
        max = left;
    if (right < size && arr[max] < arr[right])
        max = right;
    if (max != i)
        swap(&arr[max], &arr[i]);
}
int pop(int *arr)
{
    int data = arr[0];
    swap(&arr[0], &arr[size - 1]);
    size--;
    for (int i = 0; i < size; i++)
        heapify(arr, i);
    return data;
}
void insert(int *arr, int data)
{
    arr[size++] = data;
    for (int i = size / 2 - 1; i >= 0; i--)
        heapify(arr, i);
    return;
}
int main()
{
    int arr[10];
    insert(arr, 4);
    insert(arr, 6);
    insert(arr, 2);
    insert(arr, 1);
    insert(arr, 7);

    printf("data is priority queue are\n");
    for (int i = 0; i < size; i++)
        printf("%d ", arr[i]);

    int poped_val = pop(arr);
    printf("\npoped value from priority queue is %d ", poped_val);
    printf("\n\npriority queue after pop the data\n");
    for (int i = 0; i < size; i++)
        printf("%d ", arr[i]);
    return 0;
}