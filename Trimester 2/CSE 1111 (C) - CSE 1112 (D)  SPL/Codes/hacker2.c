#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Helper function to count distinct characters in a string
int countDistinct(const char *s) {
    int freq[26] = {0};
    int distinct = 0;
    for (int i = 0; s[i] != '\0'; i++) {
        if (freq[s[i] - 'a'] == 0) {
            distinct++;
            freq[s[i] - 'a'] = 1;
        }
    }
    return distinct;
}

// Comparison function to sort lexicographically in non-decreasing order
int lexicographic_sort(const char* a, const char* b) {
    return strcmp(a, b);
}

// Comparison function to sort lexicographically in non-increasing order
int lexicographic_sort_reverse(const char* a, const char* b) {
    return strcmp(b, a);
}

// Comparison function to sort by length in non-decreasing order. 
// If lengths are equal, sort lexicographically.
int sort_by_length(const char* a, const char* b) {
    int len_a = strlen(a);
    int len_b = strlen(b);
    if (len_a == len_b) {
        return strcmp(a, b);
    }
    return len_a - len_b;
}

// Comparison function to sort by the number of distinct characters in non-decreasing order. 
// If equal, sort lexicographically.
int sort_by_number_of_distinct_characters(const char* a, const char* b) {
    int distinct_a = countDistinct(a);
    int distinct_b = countDistinct(b);
    if (distinct_a == distinct_b) {
        return strcmp(a, b);
    }
    return distinct_a - distinct_b;
}

// Sorting function that accepts a comparison function pointer.
// We'll use a simple bubble sort.
void string_sort(char** arr, const int len, int (*cmp_func)(const char* a, const char* b)){
    for (int i = 0; i < len - 1; i++) {
        for (int j = 0; j < len - i - 1; j++) {
            if (cmp_func(arr[j], arr[j+1]) > 0) {
                // Swap the pointers
                char *temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int main() 
{
    int n;
    scanf("%d", &n);
  
    char** arr = (char**)malloc(n * sizeof(char*));
  
    for(int i = 0; i < n; i++){
        arr[i] = malloc(1024 * sizeof(char));
        scanf("%s", arr[i]);
        arr[i] = realloc(arr[i], strlen(arr[i]) + 1);
    }
  
    // Lexicographic sort (non-decreasing)
    string_sort(arr, n, lexicographic_sort);
    for(int i = 0; i < n; i++)
        printf("%s\n", arr[i]);
    printf("\n");

    // Lexicographic sort reverse (non-increasing)
    string_sort(arr, n, lexicographic_sort_reverse);
    for(int i = 0; i < n; i++)
        printf("%s\n", arr[i]); 
    printf("\n");

    // Sort by length (non-decreasing); lexicographic order as tie-breaker
    string_sort(arr, n, sort_by_length);
    for(int i = 0; i < n; i++)
        printf("%s\n", arr[i]);    
    printf("\n");

    // Sort by number of distinct characters (non-decreasing); lexicographic order as tie-breaker
    string_sort(arr, n, sort_by_number_of_distinct_characters);
    for(int i = 0; i < n; i++)
        printf("%s\n", arr[i]); 
    printf("\n");

    // Free allocated memory
    for (int i = 0; i < n; i++) {
        free(arr[i]);
    }
    free(arr);

    return 0;
}
