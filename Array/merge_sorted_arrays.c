#include <stdio.h>
int main(void) {
    int a[100], b[100], c[200], n, m, i = 0, j = 0, k = 0, t;
    printf("Enter sizes of two sorted arrays: "); scanf("%d%d", &n, &m);
    if (n < 0 || m < 0 || n > 100 || m > 100) return 1;
    printf("Enter first sorted array: "); for (t = 0; t < n; t++) scanf("%d", &a[t]);
    printf("Enter second sorted array: "); for (t = 0; t < m; t++) scanf("%d", &b[t]);
    while (i < n && j < m) c[k++] = (a[i] <= b[j]) ? a[i++] : b[j++];
    while (i < n) c[k++] = a[i++];
    while (j < m) c[k++] = b[j++];
    for (t = 0; t < k; t++) printf("%d ", c[t]);
    return 0;
}
