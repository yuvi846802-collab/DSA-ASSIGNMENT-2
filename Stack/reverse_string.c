#include <stdio.h>
#include <string.h>
int main(void) {
    char s[200], stack[200];
    int i, top = -1;
    printf("Enter a word or string (no spaces): "); scanf("%199s", s);
    for (i = 0; s[i] != '\0'; i++) stack[++top] = s[i];
    printf("Reversed: ");
    while (top >= 0) putchar(stack[top--]);
    putchar('\n');
    return 0;
}
