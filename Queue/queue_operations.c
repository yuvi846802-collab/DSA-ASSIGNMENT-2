#include <stdio.h>
#define SIZE 5
int q[SIZE], front = 0, rear = -1;
void enqueue(int x) { if (rear == SIZE - 1) puts("Queue full"); else q[++rear] = x; }
void dequeue(void) { if (front > rear) puts("Queue empty"); else printf("Removed: %d\n", q[front++]); }
int main(void) {
    int ch, x;
    do {
        printf("\n1.Enqueue 2.Dequeue 3.Display 0.Exit: "); scanf("%d", &ch);
        if (ch == 1) { printf("Value: "); scanf("%d", &x); enqueue(x); }
        else if (ch == 2) dequeue();
        else if (ch == 3) { int i; if (front > rear) puts("Empty"); else { for (i = front; i <= rear; i++) printf("%d ", q[i]); puts(""); } }
    } while (ch != 0);
    return 0;
}
