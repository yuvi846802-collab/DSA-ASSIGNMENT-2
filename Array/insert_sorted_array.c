#include <stdio.h>
int main(void) {
    int a[101], n, x, i;
    printf("Enter n: "); scanf("%d", &n);
    if (n < 0 || n >= 100) return 1;
    printf("Enter sorted elements: ");
    for (i = 0; i < n; i++) scanf("%d", &a[i]);
    printf("Value to insert: "); scanf("%d", &x);
    i = n - 1;
    while (i >= 0 && a[i] > x) { a[i + 1] = a[i]; i--; }
    a[i + 1] = x; n++;
    for (i = 0; i < n; i++) printf("%d ", a[i]);
    return 0;
}
