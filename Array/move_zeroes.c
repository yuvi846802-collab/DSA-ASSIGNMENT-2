#include <stdio.h>
int main(void) {
    int a[100], n, i, j = 0;
    printf("Enter n: "); scanf("%d", &n);
    if (n < 0 || n > 100) return 1;
    printf("Enter elements: "); for (i = 0; i < n; i++) scanf("%d", &a[i]);
    for (i = 0; i < n; i++) if (a[i] != 0) a[j++] = a[i];
    while (j < n) a[j++] = 0;
    for (i = 0; i < n; i++) printf("%d ", a[i]);
    return 0;
}
