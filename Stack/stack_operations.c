#include <stdio.h>
#define SIZE 5
int stack[SIZE], top = -1;
void push(int x) { if (top == SIZE - 1) printf("Stack overflow\n"); else stack[++top] = x; }
void pop(void) { if (top == -1) printf("Stack underflow\n"); else printf("Popped: %d\n", stack[top--]); }
void peek(void) { if (top == -1) printf("Stack is empty\n"); else printf("Top: %d\n", stack[top]); }
int main(void) {
    int choice, x;
    do {
        printf("\n1.Push 2.Pop 3.Peek 4.Display 0.Exit: "); scanf("%d", &choice);
        switch (choice) {
            case 1: printf("Value: "); scanf("%d", &x); push(x); break;
            case 2: pop(); break;
            case 3: peek(); break;
            case 4: { int i; for (i = top; i >= 0; i--) printf("%d ", stack[i]); printf("\n"); break; }
        }
    } while (choice != 0);
    return 0;
}
