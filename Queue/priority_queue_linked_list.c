#include <stdio.h>
#include <stdlib.h>
struct Node { int data, priority; struct Node *next; };
struct Node *head = NULL;
void insert(int x, int priority) {
    struct Node *p = (struct Node *)malloc(sizeof(struct Node)), *cur;
    if (!p) { puts("Memory allocation failed"); return; }
    p->data = x; p->priority = priority; p->next = NULL;
    if (!head || priority < head->priority) { p->next = head; head = p; return; }
    cur = head;
    while (cur->next && cur->next->priority <= priority) cur = cur->next;
    p->next = cur->next; cur->next = p;
}
void deleteHighestPriority(void) {
    struct Node *p;
    if (!head) { puts("Queue empty"); return; }
    p = head; printf("Deleted %d (priority %d)\n", p->data, p->priority);
    head = head->next; free(p);
}
void display(void) { struct Node *p; for (p = head; p; p = p->next) printf("(%d,p=%d) ", p->data, p->priority); puts(""); }
int main(void) { insert(100, 3); insert(200, 1); insert(300, 2); display(); deleteHighestPriority(); display(); return 0; }
