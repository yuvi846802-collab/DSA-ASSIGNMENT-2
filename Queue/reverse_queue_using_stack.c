#include <stdio.h>
#define SIZE 100
int main(void) {
    int q[SIZE], st[SIZE], n, i, top = -1;
    printf("Enter number of queue elements: "); scanf("%d", &n);
    if (n < 0 || n > SIZE) return 1;
    printf("Enter queue elements: "); for (i = 0; i < n; i++) scanf("%d", &q[i]);
    for (i = 0; i < n; i++) st[++top] = q[i];
    for (i = 0; i < n; i++) q[i] = st[top--];
    for (i = 0; i < n; i++) printf("%d ", q[i]);
    return 0;
}
