#include <stdio.h>
#include <ctype.h>
char st[200]; int top = -1;
int prec(char c) { if (c == '^') return 3; if (c == '*' || c == '/') return 2; if (c == '+' || c == '-') return 1; return 0; }
int main(void) {
    char in[200], out[200]; int i, k = 0;
    printf("Enter infix expression (single-letter/digit operands, no spaces): "); scanf("%199s", in);
    for (i = 0; in[i]; i++) {
        char c = in[i];
        if (isalnum((unsigned char)c)) out[k++] = c;
        else if (c == '(') st[++top] = c;
        else if (c == ')') { while (top >= 0 && st[top] != '(') out[k++] = st[top--]; if (top >= 0) top--; }
        else {
            while (top >= 0 && st[top] != '(' &&
                  (prec(st[top]) > prec(c) || (prec(st[top]) == prec(c) && c != '^')))
                out[k++] = st[top--];
            st[++top] = c;
        }
    }
    while (top >= 0) { if (st[top] != '(') out[k++] = st[top]; top--; }
    out[k] = '\0'; printf("Postfix: %s\n", out);
    return 0;
}
