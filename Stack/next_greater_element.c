#include <stdio.h>
int main(void) {
    int a[100], result[100], st[100], n, i, top = -1;
    printf("Enter n: "); scanf("%d", &n);
    if (n < 1 || n > 100) return 1;
    printf("Enter elements: "); for (i = 0; i < n; i++) scanf("%d", &a[i]);
    for (i = n - 1; i >= 0; i--) {
        while (top >= 0 && st[top] <= a[i]) top--;
        result[i] = (top < 0) ? -1 : st[top];
        st[++top] = a[i];
    }
    for (i = 0; i < n; i++) printf("%d -> %d\n", a[i], result[i]);
    return 0;
}
