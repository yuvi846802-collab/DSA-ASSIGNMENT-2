#include <stdio.h>
int main(void) {
    int a[100], n, i, j;
    printf("Enter n: "); scanf("%d", &n);
    if (n < 0 || n > 100) return 1;
    printf("Enter sorted elements: ");
    for (i = 0; i < n; i++) scanf("%d", &a[i]);
    if (n > 0) {
        j = 0;
        for (i = 1; i < n; i++) if (a[i] != a[j]) a[++j] = a[i];
        n = j + 1;
    }
    for (i = 0; i < n; i++) printf("%d ", a[i]);
    return 0;
}
