#include <stdio.h>
#define SIZE 100
int st[SIZE], top = -1;
void insertBottom(int x) {
    int temp;
    if (top == SIZE - 1) return;
    if (top == -1) { st[++top] = x; return; }
    temp = st[top--]; insertBottom(x); st[++top] = temp;
}
int main(void) {
    st[++top] = 10; st[++top] = 20; st[++top] = 30;
    insertBottom(5);
    while (top >= 0) printf("%d ", st[top--]);
    return 0;
}
