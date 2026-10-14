#include <stdio.h>
#define SIZE 5
int dq[SIZE], front = -1, rear = -1;
int full(void) { return (front == 0 && rear == SIZE - 1) || (front == rear + 1); }
void insertFront(int x) {
    if (full()) { puts("Deque full"); return; }
    if (front == -1) front = rear = 0;
    else if (front == 0) front = SIZE - 1; else front--;
    dq[front] = x;
}
void insertRear(int x) {
    if (full()) { puts("Deque full"); return; }
    if (front == -1) front = rear = 0;
    else if (rear == SIZE - 1) rear = 0; else rear++;
    dq[rear] = x;
}
void deleteFront(void) {
    if (front == -1) { puts("Deque empty"); return; }
    printf("Deleted front: %d\n", dq[front]);
    if (front == rear) front = rear = -1; else if (front == SIZE - 1) front = 0; else front++;
}
void deleteRear(void) {
    if (rear == -1) { puts("Deque empty"); return; }
    printf("Deleted rear: %d\n", dq[rear]);
    if (front == rear) front = rear = -1; else if (rear == 0) rear = SIZE - 1; else rear--;
}
void display(void) { int i; if (front == -1) { puts("Empty"); return; } i = front; while (1) { printf("%d ", dq[i]); if (i == rear) break; i = (i + 1) % SIZE; } puts(""); }
int main(void) { insertRear(20); insertFront(10); insertRear(30); display(); deleteFront(); deleteRear(); display(); return 0; }
