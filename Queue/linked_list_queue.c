#include <stdio.h>
#include <stdlib.h>
struct Node { int data; struct Node *next; };
struct Node *front = NULL, *rear = NULL;
void enqueue(int x) {
    struct Node *p = (struct Node *)malloc(sizeof(struct Node));
    if (!p) { puts("Memory allocation failed"); return; }
    p->data = x; p->next = NULL;
    if (rear == NULL) front = rear = p; else { rear->next = p; rear = p; }
}
void dequeue(void) {
    struct Node *p;
    if (!front) { puts("Queue empty"); return; }
    p = front; printf("Removed: %d\n", p->data); front = front->next;
    if (!front) rear = NULL; free(p);
}
void display(void) { struct Node *p; for (p = front; p; p = p->next) printf("%d ", p->data); puts(""); }
int main(void) { enqueue(10); enqueue(20); enqueue(30); display(); dequeue(); display(); return 0; }
