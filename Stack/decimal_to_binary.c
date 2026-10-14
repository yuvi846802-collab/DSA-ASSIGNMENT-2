#include <stdio.h>
int main(void) {
    unsigned int n, stack[32];
    int top = -1;
    printf("Enter a non-negative decimal number: ");
    if (scanf("%u", &n) != 1) return 1;
    if (n == 0) { puts("0"); return 0; }
    while (n > 0) { stack[++top] = n % 2; n /= 2; }
    while (top >= 0) printf("%u", stack[top--]);
    putchar('\n');
    return 0;
}
