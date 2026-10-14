#include <stdio.h>
int main(void) {
    int q[100], st[100], n, k, i, top = -1, temp[100], j = 0;
    printf("Enter n and k: "); scanf("%d%d", &n, &k);
    if (n < 0 || n > 100 || k < 0 || k > n) return 1;
    printf("Enter queue elements: "); for (i = 0; i < n; i++) scanf("%d", &q[i]);
    for (i = 0; i < k; i++) st[++top] = q[i];
    while (top >= 0) temp[j++] = st[top--];
    for (i = 0; i < k; i++) q[i] = temp[i];
    for (i = 0; i < n; i++) printf("%d ", q[i]);
    return 0;
}
