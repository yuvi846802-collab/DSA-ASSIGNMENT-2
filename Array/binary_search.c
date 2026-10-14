#include <stdio.h>
int main(void) {
    int a[100], n, key, low = 0, high, mid, i;
    printf("Enter n: "); scanf("%d", &n);
    if (n < 1 || n > 100) return 1;
    printf("Enter sorted elements in ascending order: ");
    for (i = 0; i < n; i++) scanf("%d", &a[i]);
    printf("Enter value to search: "); scanf("%d", &key);
    high = n - 1;
    while (low <= high) {
        mid = low + (high - low) / 2;
        if (a[mid] == key) { printf("Found at position %d\n", mid + 1); return 0; }
        if (a[mid] < key) low = mid + 1; else high = mid - 1;
    }
    printf("Not found\n");
    return 0;
}
