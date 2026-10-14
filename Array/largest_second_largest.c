#include <stdio.h>
#include <limits.h>
int main(void) {
    int a[100], n, i, largest = INT_MIN, second = INT_MIN;
    printf("Enter n: "); scanf("%d", &n);
    if (n < 2 || n > 100) { printf("Enter at least two elements\n"); return 1; }
    printf("Enter elements: "); for (i = 0; i < n; i++) scanf("%d", &a[i]);
    for (i = 0; i < n; i++) {
        if (a[i] > largest) { second = largest; largest = a[i]; }
        else if (a[i] > second && a[i] < largest) second = a[i];
    }
    if (second == INT_MIN) printf("No distinct second largest value\n");
    else printf("Largest=%d, second largest=%d\n", largest, second);
    return 0;
}
