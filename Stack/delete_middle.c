#include <stdio.h>
#define SIZE 100
int st[SIZE], top = -1;
void deleteMiddle(int count) {
    int temp;
    if (top < 0) return;
    if (count == 0) { top--; return; }
    temp = st[top--]; deleteMiddle(count - 1); st[++top] = temp;
}
int main(void) {
    int n, i;
    printf("Enter stack size: "); scanf("%d", &n);
    if (n < 1 || n > SIZE) return 1;
    printf("Enter elements from bottom to top: ");
    for (i = 0; i < n; i++) scanf("%d", &st[++top]);
    deleteMiddle(n / 2);
    while (top >= 0) printf("%d ", st[top--]);
    return 0;
}
