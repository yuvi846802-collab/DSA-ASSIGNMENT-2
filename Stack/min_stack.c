#include <stdio.h>
#define SIZE 100
int values[SIZE], mins[SIZE], top = -1;
void push(int x) { if (top == SIZE - 1) { puts("Full"); return; } values[++top] = x; mins[top] = (top == 0 || x < mins[top - 1]) ? x : mins[top - 1]; }
void pop(void) { if (top < 0) puts("Empty"); else printf("Popped %d\n", values[top--]); }
void getMin(void) { if (top < 0) puts("Empty"); else printf("Minimum = %d\n", mins[top]); }
int main(void) { push(5); push(2); push(8); getMin(); pop(); getMin(); return 0; }
