#include<stdio.h>
int main()
{
    int arr[] = { 1, 4, 5, 6, 7, 8, 83, 123, 231 };
    int *pArr = NULL;

    pArr = arr;

    int len = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < len; i++) {
        printf("%d ", *pArr);
        pArr++;
    }

    return 0;
}
