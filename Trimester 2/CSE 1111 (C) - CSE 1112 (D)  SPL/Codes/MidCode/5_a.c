#include<stdio.h>

void displayArr(int *arr, int n)
{
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
}

void calculation(int *arr, int n, int k)
{
    for (int i = 0; i < n - 1; i += 2) {
        arr[i] += k;
        arr[i+1] -= k;
    }

}

int main()
{
    int n, k;
    printf("N = ");
    scanf("%d", &n);

    int arr[n];
    printf("Array Element: ");    
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("K = ");
    scanf("%d", &k);

    calculation(arr, n, k);
    displayArr(arr, n);

    return 0;
}