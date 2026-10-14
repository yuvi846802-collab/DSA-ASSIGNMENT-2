#include <stdio.h>
int main(void) {
    char s[200], st[200], c;
    int i, top = -1, ok = 1;
    printf("Enter expression without spaces: "); scanf("%199s", s);
    for (i = 0; s[i] != '\0'; i++) {
        c = s[i];
        if (c == '(' || c == '[' || c == '{') st[++top] = c;
        else if (c == ')' || c == ']' || c == '}') {
            if (top < 0) { ok = 0; break; }
            if ((c == ')' && st[top] != '(') || (c == ']' && st[top] != '[') || (c == '}' && st[top] != '{')) { ok = 0; break; }
            top--;
        }
    }
    if (top != -1) ok = 0;
    printf("%s\n", ok ? "Balanced" : "Not balanced");
    return 0;
}
