#include <stdio.h>
int main(void) {
    int n, quantum, burst[50], rem[50], time = 0, i, done;
    printf("Enter process count and time quantum: "); scanf("%d%d", &n, &quantum);
    if (n < 1 || n > 50 || quantum < 1) return 1;
    for (i = 0; i < n; i++) { printf("Burst time P%d: ", i + 1); scanf("%d", &burst[i]); rem[i] = burst[i]; }
    do {
        done = 1;
        for (i = 0; i < n; i++) if (rem[i] > 0) {
            done = 0;
            if (rem[i] > quantum) { time += quantum; rem[i] -= quantum; }
            else { time += rem[i]; rem[i] = 0; printf("P%d finishes at time %d\n", i + 1, time); }
        }
    } while (!done);
    return 0;
}
