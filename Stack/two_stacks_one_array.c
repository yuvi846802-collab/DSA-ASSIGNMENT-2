#include <stdio.h>
#define SIZE 10
int a[SIZE], top1 = -1, top2 = SIZE;
void push1(int x) { if (top1 + 1 == top2) puts("Overflow"); else a[++top1] = x; }
void push2(int x) { if (top1 + 1 == top2) puts("Overflow"); else a[--top2] = x; }
void pop1(void) { if (top1 < 0) puts("Stack 1 underflow"); else printf("Popped from stack 1: %d\n", a[top1--]); }
void pop2(void) { if (top2 == SIZE) puts("Stack 2 underflow"); else printf("Popped from stack 2: %d\n", a[top2++]); }
int main(void) {
    push1(10); push1(20); push2(90); push2(80);
    pop1(); pop2();
    return 0;
}
