#include <stdio.h>
int main(void) {
    int a[100], n, i, current, best;
    printf("Enter n: "); scanf("%d", &n);
    if (n < 1 || n > 100) return 1;
    printf("Enter integers: "); for (i = 0; i < n; i++) scanf("%d", &a[i]);
    current = best = a[0];
    for (i = 1; i < n; i++) {
        current = (a[i] > current + a[i]) ? a[i] : current + a[i];
        if (current > best) best = current;
    }
    printf("Maximum subarray sum = %d\n", best);
    return 0;
}
