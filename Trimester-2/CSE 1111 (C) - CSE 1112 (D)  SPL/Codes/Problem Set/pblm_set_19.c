#include<stdio.h>
#include<stdlib.h>

int is_present(int *arr, int size, int val) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == val) return 1;
    }
    return 0;
}

void intersection(int *arr1, int *arr2, int *and_arr, int n,  int m){
    int i, j, k = 0, found;
    for (i = 0; i < n; i++) {
        found = 0;
        for (j = 0; j < m; j++) {
            if (arr1[i] == arr2[j]) {
                found = 1;
                break;
            }
        }
        if (found && !is_present(and_arr, k, arr1[i])) {
            and_arr[k] = arr1[i];
            k++;
        }
    }
    
    if (!k) printf("Empty set\n");
    for (i = 0; i < k; i++) printf("%d ", and_arr[i]);
    
}

int main()
{
    int n, m;
    scanf("%d", &n);
    int *arr1 = (int *)malloc(n *sizeof(int));
    for (int i = 0; i < n; i++) scanf("%d", &arr1[i]);
    scanf("%d", &m);
    int *arr2 = (int *)malloc(m *sizeof(int));
    for (int i = 0; i < m; i++) scanf("%d", &arr2[i]);
    int *and_arr = (int *)malloc((n) * sizeof(int));
    
    intersection(arr1, arr2, and_arr, n, m);

    free(arr1);
    free(arr2);
    free(and_arr);
    
    return 0;
}
