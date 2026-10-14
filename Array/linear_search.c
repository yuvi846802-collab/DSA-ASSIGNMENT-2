#include <stdio.h>
int main(void) {
    int a[100], n, key, i, found = 0;
    printf("Enter n: "); scanf("%d", &n);
    if (n < 1 || n > 100) return 1;
    printf("Enter elements: ");
    for (i = 0; i < n; i++) scanf("%d", &a[i]);
    printf("Enter value to search: "); scanf("%d", &key);
    for (i = 0; i < n; i++) if (a[i] == key) { printf("Found at position %d\n", i + 1); found = 1; break; }
    if (!found) printf("Not found\n");
    return 0;
}
