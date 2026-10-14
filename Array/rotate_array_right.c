#include <stdio.h>
int main(void) {
    int a[100], n, k, i, temp[100];
    printf("Enter n and right rotations k: "); scanf("%d%d", &n, &k);
    if (n < 1 || n > 100) return 1;
    printf("Enter elements: ");
    for (i = 0; i < n; i++) scanf("%d", &a[i]);
    k = ((k % n) + n) % n;
    for (i = 0; i < n; i++) temp[(i + k) % n] = a[i];
    for (i = 0; i < n; i++) printf("%d ", temp[i]);
    return 0;
}
