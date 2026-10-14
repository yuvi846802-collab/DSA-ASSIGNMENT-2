#include <stdio.h>
int main(void) {
    int a[100], n, pos, value, i;
    printf("Enter number of elements: "); scanf("%d", &n);
    if (n < 0 || n >= 100) return 1;
    printf("Enter elements: ");
    for (i = 0; i < n; i++) scanf("%d", &a[i]);
    printf("Enter position (1 to %d) and value: ", n + 1);
    scanf("%d%d", &pos, &value);
    if (pos < 1 || pos > n + 1) { printf("Invalid position\n"); return 1; }
    for (i = n; i >= pos; i--) a[i] = a[i - 1];
    a[pos - 1] = value; n++;
    for (i = 0; i < n; i++) printf("%d ", a[i]);
    return 0;
}
