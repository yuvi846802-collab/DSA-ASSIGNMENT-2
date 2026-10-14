#include <stdio.h>
int main(void) {
    int a[100], n, pos, i;
    printf("Enter number of elements: "); scanf("%d", &n);
    if (n < 1 || n > 100) return 1;
    printf("Enter elements: ");
    for (i = 0; i < n; i++) scanf("%d", &a[i]);
    printf("Position to delete (1 to %d): ", n); scanf("%d", &pos);
    if (pos < 1 || pos > n) { printf("Invalid position\n"); return 1; }
    for (i = pos - 1; i < n - 1; i++) a[i] = a[i + 1];
    n--;
    for (i = 0; i < n; i++) printf("%d ", a[i]);
    return 0;
}
