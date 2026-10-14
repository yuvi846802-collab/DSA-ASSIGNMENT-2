#include <stdio.h>
#include <stdlib.h>
int main(void) {
    int st[100], top = -1, i = 0, a, b, x;
    char s[200];
    printf("Enter space-separated postfix expression (integer operands): ");
    if (!fgets(s, sizeof(s), stdin)) return 1;
    while (s[i]) {
        if (s[i] == ' ') { i++; continue; }
        if (s[i] >= '0' && s[i] <= '9') {
            x = 0; while (s[i] >= '0' && s[i] <= '9') { x = x * 10 + s[i] - '0'; i++; }
            st[++top] = x; continue;
        }
        if (s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/') {
            if (top < 1) { printf("Invalid expression\n"); return 1; }
            b = st[top--]; a = st[top--];
            if (s[i] == '+') x = a + b;
            else if (s[i] == '-') x = a - b;
            else if (s[i] == '*') x = a * b;
            else { if (b == 0) { printf("Division by zero\n"); return 1; } x = a / b; }
            st[++top] = x;
        }
        i++;
    }
    if (top == 0) printf("Result = %d\n", st[top]); else printf("Invalid expression\n");
    return 0;
}
