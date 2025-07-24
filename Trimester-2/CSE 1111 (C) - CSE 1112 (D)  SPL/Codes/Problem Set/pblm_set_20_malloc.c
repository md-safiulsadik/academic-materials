#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, m, i, j;
    scanf("%d", &n);
    int *arr1 = (int *)malloc(n * sizeof(int));
    for (i = 0; i < n; i++) scanf("%d", &arr1[i]);
    scanf("%d", &m);
    int *arr2 = (int *)malloc(m * sizeof(int));
    for (i = 0; i < m; i++) scanf("%d", &arr2[i]);

    int *uni_arr = (int *)malloc((n + m) * sizeof(int));
    int k = 0;

    // Use a hash table or set to keep track of the elements in arr1
    for (i = 0; i < n; i++) {
        uni_arr[k++] = arr1[i];
    }

    for (i = 0; i < m; i++) {
        int found = 0;
        for (j = 0; j < k; j++) {            
            if (arr2[i] == uni_arr[j]) {
                found = 1;
                break;
            }
        }
        if (!found) {
            uni_arr[k++] = arr2[i];
        }
    }

    for (i = 0; i < k; i++) printf("%d ", uni_arr[i]);

    free(uni_arr);
    free(arr2);
    free(arr1); // Added this line to free arr1

    return 0;
}