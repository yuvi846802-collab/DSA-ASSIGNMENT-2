#include <stdio.h>
#define SIZE 5
int q[SIZE], front = -1, rear = -1;
void enqueue(int x) {
    if ((rear + 1) % SIZE == front) { puts("Queue full"); return; }
    if (front == -1) front = 0;
    rear = (rear + 1) % SIZE; q[rear] = x;
}
void dequeue(void) {
    if (front == -1) { puts("Queue empty"); return; }
    printf("Removed: %d\n", q[front]);
    if (front == rear) front = rear = -1;
    else front = (front + 1) % SIZE;
}
void display(void) {
    int i;
    if (front == -1) { puts("Empty"); return; }
    i = front;
    while (1) { printf("%d ", q[i]); if (i == rear) break; i = (i + 1) % SIZE; }
    puts("");
}
int main(void) {
    enqueue(10); enqueue(20); enqueue(30); display();
    dequeue(); enqueue(40); enqueue(50); enqueue(60); display();
    return 0;
}
