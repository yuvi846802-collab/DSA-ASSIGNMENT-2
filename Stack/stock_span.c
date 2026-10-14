#include <stdio.h>
int main(void) {
    int price[100], span[100], st[100], n, i, top = -1;
    printf("Enter number of days: "); scanf("%d", &n);
    if (n < 1 || n > 100) return 1;
    printf("Enter prices: "); for (i = 0; i < n; i++) scanf("%d", &price[i]);
    for (i = 0; i < n; i++) {
        while (top >= 0 && price[st[top]] <= price[i]) top--;
        span[i] = (top < 0) ? i + 1 : i - st[top];
        st[++top] = i;
    }
    for (i = 0; i < n; i++) printf("%d ", span[i]);
    return 0;
}
