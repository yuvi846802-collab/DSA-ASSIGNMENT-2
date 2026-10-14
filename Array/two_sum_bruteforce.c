#include <stdio.h>
int main(void) {
    int a[100], n, target, i, j;
    printf("Enter n: "); scanf("%d", &n);
    if (n < 2 || n > 100) return 1;
    printf("Enter elements: "); for (i = 0; i < n; i++) scanf("%d", &a[i]);
    printf("Target sum: "); scanf("%d", &target);
    for (i = 0; i < n; i++) for (j = i + 1; j < n; j++)
        if (a[i] + a[j] == target) { printf("Indices: %d and %d\n", i, j); return 0; }
    printf("No pair found\n");
    return 0;
}
