#include <stdio.h>
#include <string.h>
int main(void) {
    char s[200], st[200];
    int i, top = -1, ok = 1;
    printf("Enter a word (no spaces): "); scanf("%199s", s);
    for (i = 0; s[i]; i++) st[++top] = s[i];
    for (i = 0; s[i]; i++) if (s[i] != st[top--]) { ok = 0; break; }
    printf("%s\n", ok ? "Palindrome" : "Not a palindrome");
    return 0;
}
