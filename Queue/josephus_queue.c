#include <stdio.h>
int main(void) {
    int q[1000], n, k, front = 0, rear, i, count = 1;
    printf("Enter number of people n and step k: "); scanf("%d%d", &n, &k);
    if (n < 1 || n > 1000 || k < 1) return 1;
    for (i = 0; i < n; i++) q[i] = i + 1;
    rear = n;
    while (rear - front > 1) {
        int p;
        for (p = 1; p < k; p++) q[rear++] = q[front++];
        printf("Removed: %d\n", q[front++]);
    }
    printf("Survivor: %d\n", q[front]);
    return 0;
}
