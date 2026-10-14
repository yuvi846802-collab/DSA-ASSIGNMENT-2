#include <stdio.h>
int main(void) {
    int a[100], n, x, i, j = 0;
    printf("Enter n: "); scanf("%d", &n);
    if (n < 0 || n > 100) return 1;
    printf("Enter elements: ");
    for (i = 0; i < n; i++) scanf("%d", &a[i]);
    printf("Value to delete: "); scanf("%d", &x);
    for (i = 0; i < n; i++) if (a[i] != x) a[j++] = a[i];
    n = j;
    for (i = 0; i < n; i++) printf("%d ", a[i]);
    return 0;
}
