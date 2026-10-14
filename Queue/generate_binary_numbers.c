#include <stdio.h>
#include <string.h>
int main(void) {
    char q[1000][32]; int n, front = 0, rear = 0, i;
    printf("Enter n (1 to 999): "); scanf("%d", &n);
    if (n < 1 || n > 999) return 1;
    strcpy(q[rear++], "1");
    for (i = 0; i < n; i++) {
        char current[32];
        strcpy(current, q[front++]);
        printf("%s ", current);
        snprintf(q[rear], sizeof(q[rear]), "%s0", current); rear++;
        snprintf(q[rear], sizeof(q[rear]), "%s1", current); rear++;
    }
    return 0;
}
