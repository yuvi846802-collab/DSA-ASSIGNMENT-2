/* Portable beginner-friendly alternative for Two Sum.
   This version uses a simple nested search rather than a hash table.
   A true hash-table implementation needs a defined key range or a hash function. */
#include <stdio.h>
int main(void) {
    int a[100], n, target, i, j;
    printf("Enter n: "); scanf("%d", &n);
    if (n < 2 || n > 100) return 1;
    printf("Enter elements: "); for (i = 0; i < n; i++) scanf("%d", &a[i]);
    printf("Target: "); scanf("%d", &target);
    for (i = 0; i < n; i++) for (j = i + 1; j < n; j++)
        if (a[i] + a[j] == target) { printf("%d + %d = %d (indices %d,%d)\n", a[i], a[j], target, i, j); return 0; }
    puts("No pair found"); return 0;
}
