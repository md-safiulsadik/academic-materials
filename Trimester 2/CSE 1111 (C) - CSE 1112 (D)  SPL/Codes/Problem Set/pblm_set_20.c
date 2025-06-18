#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n, m, i, j, k=0;
    scanf("%d", &n);
    int arr1[n];
    for (i = 0; i < n; i++) scanf("%d", &arr1[i]);
    scanf("%d", &m);
    int arr2[m];
    for (i = 0; i < m; i++) scanf("%d", &arr2[i]);

    int uni_arr[n+m];

    for (i = 0; i < n; i++, k++) {
        uni_arr[k] = arr1[i];
    }

    for (i = 0; i < m; i++) {
        int found = 0;
        for (j = 0; j < n; j++) {
            if (arr2[i] == arr1[j]) {
                found = 1;
                break;                        
            }
        }
        if (!found) {
            uni_arr[k] = arr2[i];
            k++;
        }
    }

    for (i = 0; i < k; i++) printf("%d ", uni_arr[i]);

    return 0;
}